#include "print.h"
#include "keyboard.h"
#include "x86_64/rtc.h"
#include "x86_64/port.h"
#include "disk-test.h"
#include "itoa.h"
#include "fat.h"
#include "multiboot.h"
#include <stdint.h>

#define KEY_CODE_A 0x1E
#define KEY_CODE_B 0x30
#define KEY_CODE_C 0x2E
#define KEY_CODE_D 0x20
#define KEY_CODE_E 0x12
#define KEY_CODE_F 0x21
#define KEY_CODE_G 0x22
#define KEY_CODE_H 0x23
#define KEY_CODE_I 0x17
#define KEY_CODE_J 0x24
#define KEY_CODE_K 0x25
#define KEY_CODE_L 0x26
#define KEY_CODE_M 0x32
#define KEY_CODE_N 0x31
#define KEY_CODE_O 0x18
#define KEY_CODE_P 0x19
#define KEY_CODE_Q 0x10
#define KEY_CODE_R 0x13
#define KEY_CODE_S 0x1F
#define KEY_CODE_T 0x14
#define KEY_CODE_U 0x16
#define KEY_CODE_V 0x2F
#define KEY_CODE_W 0x11
#define KEY_CODE_X 0x2D
#define KEY_CODE_Y 0x15
#define KEY_CODE_Z 0x2C
#define KEY_CODE_SPACE 0x39
#define KEY_CODE_ENTER 0x1C

// src/impl/kernel/main.c
void test_function(void);
void disktest_function(void);
// at top of your kernel file or in fat.h
//fat_info_t fat;
char to_ascii(uint16_t code) {
    switch (code) {
        case KEY_CODE_A: return 'A';
        case KEY_CODE_B: return 'B';
        case KEY_CODE_C: return 'C';
        case KEY_CODE_D: return 'D';
        case KEY_CODE_E: return 'E';
        case KEY_CODE_F: return 'F';
        case KEY_CODE_G: return 'G';
        case KEY_CODE_H: return 'H';
        case KEY_CODE_I: return 'I';
        case KEY_CODE_J: return 'J';
        case KEY_CODE_K: return 'K';
        case KEY_CODE_L: return 'L';
        case KEY_CODE_M: return 'M';
        case KEY_CODE_N: return 'N';
        case KEY_CODE_O: return 'O';
        case KEY_CODE_P: return 'P';
        case KEY_CODE_Q: return 'Q';
        case KEY_CODE_R: return 'R';
        case KEY_CODE_S: return 'S';
        case KEY_CODE_T: return 'T';
        case KEY_CODE_U: return 'U';
        case KEY_CODE_V: return 'V';
        case KEY_CODE_W: return 'W';
        case KEY_CODE_X: return 'X';
        case KEY_CODE_Y: return 'Y';
        case KEY_CODE_Z: return 'Z';
        case KEY_CODE_SPACE: return ' ';
        case KEY_CODE_ENTER: return '\n';
    }    
    
    return '?';
}

/*void filename_to_83(const char* input, char out[11]) {
    int i = 0, j = 0;
    for (i = 0; i < 11; i++) out[i] = ' '; // fill with spaces

    i = 0;
    j = 0;
    while (input[i] && j < 11) {
        if (input[i] == '.') {
            j = 8; // extension starts at byte 8
            i++;
            continue;
        }
        out[j++] = toupper(input[i++]);
    }
}

void cat_file_simple(const char* name) {
    char filename83[11];
    filename_to_83(name, filename83); // converts "TEST.TXT" -> "TEST    TXT"

    cat_file(filename83, &fat);
}*/

void disktest2_function(void) {
    uint16_t buffer[256];    // 512 bytes
    char buf[21];

    // read sector 0 here (pseudo-code, implement disk_read_sector)
    disk_read_sector(0, buffer);

    uint16_t bytes_per_sector = buffer[11] | (buffer[12] << 8);
    uint8_t sectors_per_cluster = buffer[13];

    utoa(bytes_per_sector, buf);
    print_str("Bytes per sector: ");
    print_str(buf);
    print_str("\n");

    utoa(sectors_per_cluster, buf);
    print_str("Sectors per cluster: ");
    print_str(buf);
    print_str("\n");
}

void handle_input(struct KeyboardEvent event) {
    if (event.type == KEYBOARD_EVENT_TYPE_MAKE) {
        print_set_color(PRINT_COLOR_WHITE, PRINT_COLOR_BLACK);
        print_char(to_ascii(event.code));
    } else if (event.type == KEYBOARD_EVENT_TYPE_BREAK) {
    }
}

void bootsect_dump(void) {
    uint8_t buffer[512];   // One sector
    char hex[17];          // 16 hex digits + null

    // Read sector 0 (boot sector) from disk
    disk_read_sector(0, buffer);

    print_str("Boot Sector (Hex Dump):\n");

    // Print 16 bytes per line
    for (int i = 0; i < 512; i++) {
        utoa_hex(buffer[i], hex);   // Convert byte to hex string

        // If single digit, add a leading 0 for readability
        if (buffer[i] < 16) {
            print_str("0");
        }
        print_str(hex);
        print_str(" ");

        // New line every 16 bytes
        if ((i + 1) % 16 == 0) {
            print_str("\n");
        }
    }
}


/*struct multiboot_tag_framebuffer *fb = NULL;

for (struct multiboot_tag *tag = (struct multiboot_tag *)(mbi + 8);
     tag->type != MULTIBOOT_TAG_TYPE_END;
     tag = (struct multiboot_tag *)((uint8_t *)tag + ((tag->size + 7) & ~7)))
{
    if (tag->type == MULTIBOOT_TAG_TYPE_FRAMEBUFFER)
    {
        fb = (struct multiboot_tag_framebuffer *)tag;
    }
}*/

void fill_screen_teal(struct multiboot_tag_framebuffer *fb)
{
    uint8_t *framebuffer = (uint8_t *)(uint64_t)fb->common.framebuffer_addr;

    uint32_t width  = fb->common.framebuffer_width;
    uint32_t height = fb->common.framebuffer_height;
    uint32_t pitch  = fb->common.framebuffer_pitch;
    uint8_t  bpp    = fb->common.framebuffer_bpp;

    // Teal components
    uint8_t r = 0;
    uint8_t g = 128;
    uint8_t b = 128;

    for (uint32_t y = 0; y < height; y++)
    {
        for (uint32_t x = 0; x < width; x++)
        {
            uint8_t *pixel = framebuffer + y * pitch + x * (bpp / 8);

            if (bpp == 32 || bpp == 24)
            {
                // Use field positions from multiboot
                uint32_t color = 0;

                color |= (r & ((1 << fb->framebuffer_red_mask_size) - 1))
                         << fb->framebuffer_red_field_position;

                color |= (g & ((1 << fb->framebuffer_green_mask_size) - 1))
                         << fb->framebuffer_green_field_position;

                color |= (b & ((1 << fb->framebuffer_blue_mask_size) - 1))
                         << fb->framebuffer_blue_field_position;

                *(uint32_t *)pixel = color;
            }
        }
    }
}



void kernel_main() {
	volatile uint32_t *fb = (uint32_t *)0xE0000000;  // TEMP guess

	fb[0] = 0x00FF0000;  // bright red pixel
	print_clear();
	print_set_color(PRINT_COLOR_BLUE, PRINT_COLOR_BLACK);
	print_str("OuterOS - The successor to WOXOS\n");
	print_str("Initialising modules...\n");
	test_function();
	print_str("Initialising keyboard...\n");
	keyboard_init();
	keyboard_set_handler(handle_input);
	print_str("Initialising disk...\n");
	disktest2_function();
	//bootsect_dump();
	fat16_init();
	print_str("WELCOME!\n");
	fat16_cat("TEST.TXT");
	fat16_cat("MOTD.TXT");
	//load_program("TEST.TXT");
	//jump_to_program();
	fill_screen_teal(MULTIBOOT_TAG_TYPE_FRAMEBUFFER);
        uint8_t prev_seconds = 0;
    
    for (uint8_t i = 0; i < 1;) {
        uint8_t seconds = rtc_seconds();
        
        if (seconds != prev_seconds) {
            i++;
            print_set_color(PRINT_COLOR_GREEN, PRINT_COLOR_BLACK);
            print_str("\nSeconds: ");
            print_uint64_dec(seconds);
        }
        
        prev_seconds = seconds;
    }
    
    print_str(" - Seconds loop disabled.\n");
    
    while (1);
}

void test_function() {

	print_str("The test module was initialised correctly\n");

}




