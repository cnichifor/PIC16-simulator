#include "register.h"

void set_bit(uint8_t *reg, uint8_t pos){
    pos &= 7;
    uint8_t mask = 1 << pos;
    *reg = *reg | mask;
}

void reset_bit(uint8_t *reg, uint8_t pos){
    pos &= 7;
    uint8_t mask = 254 << pos;
    *reg = *reg & mask;
}

uint8_t get_bit(uint8_t *reg, uint8_t pos){
    pos &= 7;
    uint8_t mask = 1 << pos;
    return *reg & mask ? 1 : 0;
}
