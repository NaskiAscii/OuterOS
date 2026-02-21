#include "stdint.h"
#include "x86_64/port.h"
#include "disk-test.h"

#define ATA_DATA       0x1F0
#define ATA_SECCOUNT   0x1F2
#define ATA_LBA_LOW    0x1F3
#define ATA_LBA_MID    0x1F4
#define ATA_LBA_HIGH   0x1F5
#define ATA_DRIVE      0x1F6
#define ATA_STATUS     0x1F7
#define ATA_COMMAND    0x1F7

#define ATA_CMD_READ   0x20

//static inline void port_outb(uint16_t port, uint8_t val);
//static inline uint8_t port_inb(uint16_t port);
//static inline uint16_t port_inw(uint16_t port);

void ata_wait()
{
    while (port_inb(ATA_STATUS) & 0x80); // wait while BSY set
}

int disk_read_sector(uint32_t lba, uint8_t* buffer)
{
    ata_wait();

    port_outb(ATA_DRIVE, 0xE0 | ((lba >> 24) & 0x0F));
    port_outb(ATA_SECCOUNT, 1);
    port_outb(ATA_LBA_LOW, (uint8_t)(lba));
    port_outb(ATA_LBA_MID, (uint8_t)(lba >> 8));
    port_outb(ATA_LBA_HIGH, (uint8_t)(lba >> 16));
    port_outb(ATA_COMMAND, ATA_CMD_READ);

    ata_wait();

    for (int i = 0; i < 256; i++) {
        ((uint16_t*)buffer)[i] = port_inw(ATA_DATA);
    }

    return 0;
}
