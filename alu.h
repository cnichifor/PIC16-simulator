#include <stdint.h>

#ifndef ALU_H
#define ALU_H

typedef struct alu {
    uint8_t* in_a;
    uint8_t* in_b;
    uint8_t* out;
} alu;

void add(alu *alu);

#endif