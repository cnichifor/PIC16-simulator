#ifndef ALU_H
#define ALU_H

#include <stdint.h>

typedef struct {
    uint8_t* in_a;
    uint8_t* in_b;
    uint8_t* out;
} alu;

void add(alu *alu);


#endif