#ifndef DISK_TEST_H
#define DISK_TEST_H

#include "stdint.h"
#include "x86_64/port.h"

// ATA ports
#define ATA_DATA       0x1F0
#define ATA_SECCOUNT   0x1F2
#define ATA_LBA_LOW    0x1F3
#define ATA_LBA_MID    0x1F4
#define ATA_LBA_HIGH   0x1F5
#define ATA_DRIVE      0x1F6
#define ATA_STATUS     0x1F7
#define ATA_COMMAND    0x1F7

// ATA commands
#define ATA_CMD_READ   0x20

#ifdef __cplusplus
extern "C" {
#endif

// Wait for ATA device to be ready
void ata_wait(void);

// Read a single sector from LBA into buffer (512 bytes)
int disk_read_sector(uint32_t lba, uint8_t* buffer);

#ifdef __cplusplus
}
#endif

#endif // DISK_TEST_H