#include "string.h"
#include "stdint.h"

int strcmp(const char* a, const char* b) {
    while (*a && (*a == *b)) {
        a++;
        b++;
    }
    return *(unsigned char*)a - *(unsigned char*)b;
}

int strncmp(const char* a, const char* b, uint32_t n) {
    while (n && *a && (*a == *b)) {
        a++;
        b++;
        n--;
    }
    if (n == 0) return 0;
    return *(unsigned char*)a - *(unsigned char*)b;
}

uint32_t strlen(const char* str) {
    uint32_t len = 0;
    while (str[len])
        len++;
    return len;
}

void* memcpy(void* dest, const void* src, uint32_t n) {
    uint8_t* d = (uint8_t*)dest;
    const uint8_t* s = (const uint8_t*)src;

    for (uint32_t i = 0; i < n; i++)
        d[i] = s[i];

    return dest;
}

void* memset(void* dest, int value, uint32_t n) {
    uint8_t* d = (uint8_t*)dest;

    for (uint32_t i = 0; i < n; i++)
        d[i] = (uint8_t)value;

    return dest;
}

char toupper(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - ('a' - 'A');
    }
    return c;
}