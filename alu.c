#include "alu.h"

void add(alu *alu) {
    *alu->out = *alu->in_a + *alu->in_b;
}
