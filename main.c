#include <stdio.h>

#include "alu.h"
#include "register.h"
#include "func.h"
#include "pic16.h"

int main(){
    printf("PIC16\n");

    uint8_t a = 5;
    uint8_t b = 3;
    uint8_t c;

    pic16 PIC;
    alu alu;
    PIC.ALU = &alu;
    uint8_t w;
    PIC.W = &w;
  

    PIC.ALU->in_a = &a;
    PIC.ALU->in_b = &b;
    PIC.ALU->out = &c;

    // wiring alu with W reg
    wire(&PIC.ALU->out, PIC.W);

    add(PIC.ALU);

    printf("%u\n", *PIC.W);

    return 0;
}