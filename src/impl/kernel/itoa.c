#include "itoa.h"

void utoa(uint64_t value, char* buffer) {
    char temp[21];
    int i = 0;

    if (value == 0) {
        buffer[0] = '0';
        buffer[1] = '\0';
        return;
    }

    while (value > 0) {
        temp[i++] = '0' + (value % 10);
        value /= 10;
    }

    // reverse string
    for (int j = 0; j < i; j++) {
        buffer[j] = temp[i - j - 1];
    }
    buffer[i] = '\0';
}

void utoa_hex(uint64_t value, char* buffer) {
    const char hex_chars[] = "0123456789ABCDEF";
    char temp[17];
    int i = 0;

    if (value == 0) {
        buffer[0] = '0';
        buffer[1] = '\0';
        return;
    }

    while (value > 0) {
        temp[i++] = hex_chars[value & 0xF];
        value >>= 4;
    }

    // reverse string
    for (int j = 0; j < i; j++) {
        buffer[j] = temp[i - j - 1];
    }
    buffer[i] = '\0';
}