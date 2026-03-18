#ifndef PIC16_H
#define PIC16_H

#include<stdint.h>

#include"alu.h"

typedef struct {
    uint8_t *W;
    alu *ALU;
} pic16;

#endif