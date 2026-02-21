#include "fat.h"
#include "disk-test.h"
#include "print.h"
#include "itoa.h"
#include "string.h" // If you have your own strcmp/strncmp

#define DIR_ENTRY_SIZE 32
#define ATTR_DIRECTORY 0x10
#define ATTR_VOLUME_ID 0x08
#define FAT_EOF 0xFFF

// Helper: parse boot sector
void parse_boot_sector(fat_info_t* info) {
    uint8_t buffer[512];
    disk_read_sector(0, buffer);

    info->bytes_per_sector    = buffer[11] | (buffer[12] << 8);
    info->sectors_per_cluster = buffer[13];
    info->reserved_sector_count = buffer[14] | (buffer[15] << 8);
    info->num_fats            = buffer[16];
    info->root_entry_count    = buffer[17] | (buffer[18] << 8);
    info->fat_size_sectors    = buffer[22] | (buffer[23] << 8);

    info->root_dir_sectors = (info->root_entry_count * DIR_ENTRY_SIZE + info->bytes_per_sector - 1) / info->bytes_per_sector;
    info->first_data_sector = info->reserved_sector_count + info->num_fats * info->fat_size_sectors + info->root_dir_sectors;
}

// Helper: read cluster into buffer
void read_cluster(const fat_info_t* info, uint16_t cluster, uint8_t* buffer) {
    uint32_t first_sector = info->first_data_sector + (cluster - 2) * info->sectors_per_cluster;
    for (int i = 0; i < info->sectors_per_cluster; i++) {
        disk_read_sector(first_sector + i, buffer + i * info->bytes_per_sector);
    }
}

// Helper: read FAT entry (FAT12)
uint16_t fat12_next_cluster(const fat_info_t* info, uint16_t cluster, uint8_t* fat_sector) {
    // For simplicity: read whole FAT into fat_sector buffer before calling
    uint32_t fat_offset = cluster + (cluster / 2);
    uint16_t next;

    if (cluster & 1) { // odd cluster
        next = ((fat_sector[fat_offset + 1] << 4) | (fat_sector[fat_offset] >> 4)) & 0xFFF;
    } else {           // even cluster
        next = ((fat_sector[fat_offset + 1] & 0x0F) << 8) | fat_sector[fat_offset];
    }
    if (next >= FAT_EOF) return 0xFFFF;
    return next;
}

// Main: cat file
int cat_file(const char* filename, const fat_info_t* info) {
    uint8_t buffer[512];
    uint8_t fat[4096]; // Enough for first FAT copy of FAT12/16
    disk_read_sector(info->reserved_sector_count, fat); // Read first FAT sector(s) only for simplicity

    uint32_t root_dir_start = info->reserved_sector_count + info->num_fats * info->fat_size_sectors;
    uint32_t root_dir_entries = info->root_entry_count;
    uint8_t entry[DIR_ENTRY_SIZE];

    // Search root directory for filename
    for (uint32_t i = 0; i < root_dir_entries; i++) {
        uint32_t sector = root_dir_start + (i * DIR_ENTRY_SIZE) / info->bytes_per_sector;
        uint32_t offset = (i * DIR_ENTRY_SIZE) % info->bytes_per_sector;
        disk_read_sector(sector, buffer);

        for (int j = 0; j < DIR_ENTRY_SIZE; j++)
            entry[j] = buffer[offset + j];

        // Skip empty or volume entries
        if (entry[0] == 0x00 || entry[0] == 0xE5 || (entry[11] & ATTR_VOLUME_ID)) continue;

        // Compare name (8.3 format)
        if (strncmp((char*)entry, filename, 11) == 0) {
            uint16_t first_cluster = entry[26] | (entry[27] << 8);
            uint32_t file_size = entry[28] | (entry[29] << 8) | (entry[30] << 16) | (entry[31] << 24);

            uint16_t cluster = first_cluster;
            uint32_t bytes_left = file_size;

            while (cluster != 0xFFFF && bytes_left > 0) {
                uint8_t cluster_buf[512 * info->sectors_per_cluster];
                read_cluster(info, cluster, cluster_buf);

                uint32_t to_print = (bytes_left < info->bytes_per_sector * info->sectors_per_cluster) ?
                                    bytes_left : info->bytes_per_sector * info->sectors_per_cluster;

                for (uint32_t k = 0; k < to_print; k++) {
                    char c[2] = {cluster_buf[k], '\0'};
                    print_str(c);
                }

                bytes_left -= to_print;
                cluster = fat12_next_cluster(info, cluster, fat);
            }
            return 0; // Success
        }
    }
    print_str("File not found\n");
    return -1; // Not found
}