#include "fat.h"
#include "print.h"

#define DIR_ENTRY_SIZE 32
#define ATTR_VOLUME_ID 0x08
#define PROGRAM_LOAD_ADDR 0x200000

static FAT16_BPB bpb;
static uint8_t fat[65536];      // enough for small FAT16

/* ============================= */
/* Basic Helpers (no libc)       */
/* ============================= */

static char to_upper(char c)
{
    if (c >= 'a' && c <= 'z')
        return c - 32;
    return c;
}

static int memcmp_simple(const void* a, const void* b, uint32_t n)
{
    const uint8_t* p1 = a;
    const uint8_t* p2 = b;

    for (uint32_t i = 0; i < n; i++)
        if (p1[i] != p2[i])
            return p1[i] - p2[i];

    return 0;
}

/* ============================= */
/* BPB Init                      */
/* ============================= */

int fat16_init()
{
    uint8_t sector[512];

    if (disk_read_sector(0, sector) != 0)
        return -1;

    bpb.bytes_per_sector      = *(uint16_t*)(sector + 11);
    bpb.sectors_per_cluster   = sector[13];
    bpb.reserved_sector_count = *(uint16_t*)(sector + 14);
    bpb.num_fats              = sector[16];
    bpb.root_entry_count      = *(uint16_t*)(sector + 17);
    bpb.fat_size_sectors      = *(uint16_t*)(sector + 22);

    /* Load full FAT */
    for (uint16_t i = 0; i < bpb.fat_size_sectors; i++)
    {
        disk_read_sector(
            bpb.reserved_sector_count + i,
            fat + i * bpb.bytes_per_sector
        );
    }

    return 0;
}

/* ============================= */
/* FAT16 helpers                 */
/* ============================= */

static uint32_t root_dir_sectors()
{
    return ((bpb.root_entry_count * 32) +
           (bpb.bytes_per_sector - 1))
           / bpb.bytes_per_sector;
}

static uint32_t first_data_sector()
{
    return bpb.reserved_sector_count +
           (bpb.num_fats * bpb.fat_size_sectors) +
           root_dir_sectors();
}

static uint32_t cluster_to_lba(uint16_t cluster)
{
    return first_data_sector() +
           (cluster - 2) * bpb.sectors_per_cluster;
}

static uint16_t fat_next(uint16_t cluster)
{
    uint16_t* entries = (uint16_t*)fat;
    return entries[cluster];
}

/* ============================= */
/* 8.3 conversion                */
/* ============================= */

static void to_83(const char* input, char* output)
{
    for (int i = 0; i < 11; i++)
        output[i] = ' ';

    int i = 0;
    int j = 0;

    while (input[i] && input[i] != '.' && j < 8)
        output[j++] = to_upper(input[i++]);

    if (input[i] == '.')
        i++;

    j = 8;

    while (input[i] && j < 11)
        output[j++] = to_upper(input[i++]);
}

/* ============================= */
/* cat file                      */
/* ============================= */

int fat16_cat(const char* filename)
{
    uint8_t sector[512];
    uint8_t entry[32];
    char name83[11];

    to_83(filename, name83);

    uint32_t root_start =
        bpb.reserved_sector_count +
        (bpb.num_fats * bpb.fat_size_sectors);

    for (uint32_t i = 0; i < bpb.root_entry_count; i++)
    {
        uint32_t lba =
            root_start + (i * 32) / bpb.bytes_per_sector;

        uint32_t offset =
            (i * 32) % bpb.bytes_per_sector;

        disk_read_sector(lba, sector);

        for (int j = 0; j < 32; j++)
            entry[j] = sector[offset + j];

        if (entry[0] == 0x00)
            break;

        if (entry[0] == 0xE5)
            continue;

        if (entry[11] == 0x0F)
            continue;

        if (entry[11] & ATTR_VOLUME_ID)
            continue;

        if (memcmp_simple(entry, name83, 11) == 0)
        {
            uint16_t cluster =
                entry[26] | (entry[27] << 8);

            uint32_t size =
                entry[28] |
                (entry[29] << 8) |
                (entry[30] << 16) |
                (entry[31] << 24);

            uint32_t remaining = size;

            while (cluster < 0xFFF8 && remaining > 0)
            {
                uint8_t buffer[4096];

                uint32_t lba_data = cluster_to_lba(cluster);

                for (uint8_t s = 0; s < bpb.sectors_per_cluster; s++)
                {
                    disk_read_sector(
                        lba_data + s,
                        buffer + s * bpb.bytes_per_sector
                    );
                }

                uint32_t cluster_bytes =
                    bpb.bytes_per_sector *
                    bpb.sectors_per_cluster;

                uint32_t to_print =
                    (remaining < cluster_bytes)
                    ? remaining
                    : cluster_bytes;

                for (uint32_t k = 0; k < to_print; k++)
                    print_char(buffer[k]);

                remaining -= to_print;
                cluster = fat_next(cluster);
            }

            return 0;
        }
    }

    print_str("File not found\n");
    return -1;
}

//program loader

int load_program(const char* filename)
{
    uint8_t sector[512];
    uint8_t entry[32];
    char name83[11];

    to_83(filename, name83);

    uint32_t root_start =
        bpb.reserved_sector_count +
        (bpb.num_fats * bpb.fat_size_sectors);

    for (uint32_t i = 0; i < bpb.root_entry_count; i++)
    {
        uint32_t lba =
            root_start + (i * 32) / bpb.bytes_per_sector;

        uint32_t offset =
            (i * 32) % bpb.bytes_per_sector;

        disk_read_sector(lba, sector);

        for (int j = 0; j < 32; j++)
            entry[j] = sector[offset + j];

        if (entry[0] == 0x00)
            break;

        if (entry[0] == 0xE5)
            continue;

        if (entry[11] == 0x0F)
            continue;

        if (entry[11] & ATTR_VOLUME_ID)
            continue;

        if (memcmp_simple(entry, name83, 11) == 0)
        {
            uint16_t cluster =
                entry[26] | (entry[27] << 8);

            uint32_t size =
                entry[28] |
                (entry[29] << 8) |
                (entry[30] << 16) |
                (entry[31] << 24);

            uint32_t remaining = size;

            while (cluster < 0xFFF8 && remaining > 0)
            {
                uint8_t buffer[4096];

                uint32_t lba_data = cluster_to_lba(cluster);

                for (uint8_t s = 0; s < bpb.sectors_per_cluster; s++)
                {
                    disk_read_sector(
                        lba_data + s,
                        buffer + s * bpb.bytes_per_sector
                    );
                }

                uint32_t cluster_bytes =
                    bpb.bytes_per_sector *
                    bpb.sectors_per_cluster;

                uint32_t to_print =
                    (remaining < cluster_bytes)
                    ? remaining
                    : cluster_bytes;

                for (uint32_t k = 0; k < to_print; k++)
                    memcpy((void*)0x200000, buffer, cluster_bytes);

                remaining -= to_print;
                cluster = fat_next(cluster);
            }

            return 0;
        }
    }

    print_str("File not found\n");
    return -1;
}

//program jump

void jump_to_program() {
    void (*entry)(void) = (void (*)(void))PROGRAM_LOAD_ADDR;
    entry();   //do the jumpy jumpy
}