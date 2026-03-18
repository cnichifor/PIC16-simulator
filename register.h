#ifndef REGISTER_H
#define REGISTER_H

#include <stdint.h>

void set_bit(uint8_t *reg, uint8_t pos);
void reset_bit(uint8_t *reg, uint8_t pos);
uint8_t get_bit(uint8_t *reg, uint8_t pos);

#endif