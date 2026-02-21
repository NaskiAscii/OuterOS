#ifndef FAT_H
#define FAT_H

#include "stdint.h"

// Basic info parsed from boot sector
typedef struct {
    uint16_t bytes_per_sector;
    uint8_t sectors_per_cluster;
    uint16_t reserved_sector_count;
    uint8_t num_fats;
    uint16_t fat_size_sectors;
    uint16_t root_entry_count;
    uint16_t root_dir_sectors;
    uint16_t first_data_sector;
} fat_info_t;

// Functions
void parse_boot_sector(fat_info_t* info);
int cat_file(const char* filename, const fat_info_t* info);

#endif