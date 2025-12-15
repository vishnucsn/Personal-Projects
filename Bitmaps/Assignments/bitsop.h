#ifndef __BITSOP_H
#define __BITSOP_H

#include <stdint.h>

#define IS_BIT_SET(n, pos)  (!!(n & (1UL<<pos)))

#define COMPLEMENT8(num) ((uint8_t)(~(uint8_t)num))

#endif