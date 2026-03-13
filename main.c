#include <stdio.h>

#include "alu.h"

int main(){
    printf("PIC16\n");

    uint8_t a = 255;
    uint8_t b = 1;
    uint8_t c;

    alu alu;
    alu.in_a = &a;
    alu.in_b = &b;
    alu.out = &c;

    add(&alu);

    printf("%u\n", *alu.out);

    return 0;
}