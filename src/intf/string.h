#ifndef STRING_H
#define STRING_H

#include "stdint.h"

int strcmp(const char* a, const char* b);
int strncmp(const char* a, const char* b, uint32_t n);
uint32_t strlen(const char* str);
void* memcpy(void* dest, const void* src, uint32_t n);
void* memset(void* dest, int value, uint32_t n);
char toupper(char c);

#endif