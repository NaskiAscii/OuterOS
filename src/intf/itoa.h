#ifndef ITOA_H
#define ITOA_H

#include "stdint.h"

// Convert unsigned integer to decimal string
void utoa(uint64_t value, char* buffer);

// Convert unsigned integer to hexadecimal string
// buffer must have at least 17 bytes for 64-bit numbers (16 hex digits + null)
void utoa_hex(uint64_t value, char* buffer);

#endif // ITOA_H