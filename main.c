#include <stdio.h>

#include "alu.h"
#include "register.h"
#include "func.h"

int main(){
    printf("PIC16\n");

    uint8_t a = 255;
    uint8_t b = 1;
    uint8_t c;

    alu alu;
    reg w;
    alu.in_a = &a;
    alu.in_b = &b;
    alu.out = &c;

    wire(alu.out, w.data);

    add(&alu);


    printf("%u\n", *w.data);

    return 0;
}