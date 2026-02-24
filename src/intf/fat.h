#pragma once
#include "stdint.h"

typedef struct {
    uint16_t bytes_per_sector;
    uint8_t  sectors_per_cluster;
    uint16_t reserved_sector_count;
    uint8_t  num_fats;
    uint16_t root_entry_count;
    uint16_t fat_size_sectors;
} FAT16_BPB;

int fat16_init();
int fat16_cat(const char* filename);
int load_program(const char* filename);
void jump_to_program();
