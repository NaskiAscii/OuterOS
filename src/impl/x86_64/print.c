#include "print.h"

static uint16_t* const VIDEO_MEMORY = (uint16_t*)0xB8000;  // Assuming VGA text mode
static uint8_t cursor_x = 0, cursor_y = 0;
static uint8_t current_color = PRINT_COLOR_LIGHT_GRAY;

void print_clear() {
    for (int y = 0; y < 25; ++y) {
        for (int x = 0; x < 80; ++x) {
            VIDEO_MEMORY[y * 80 + x] = (current_color << 8) | ' ';
        }
    }
}

void print_char(char character) {
    if (character == '\n') {
        cursor_x = 0;
        if (++cursor_y >= 25) {
            cursor_y = 0;
        }
    } else {
        VIDEO_MEMORY[cursor_y * 80 + cursor_x] = (current_color << 8) | character;
        if (++cursor_x >= 80) {
            cursor_x = 0;
            if (++cursor_y >= 25) {
                cursor_y = 0;
            }
        }
    }
}

void print_str(const char* str) {
    while (*str) {
        print_char(*str++);
    }
}

void print_set_color(uint8_t foreground, uint8_t background) {
    current_color = (background << 4) | (foreground & 0x0F);
}
