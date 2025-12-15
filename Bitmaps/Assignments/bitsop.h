#ifndef __BITSOP_H
#define __BITSOP_H

#include <stdint.h>

#define IS_BIT_SET(n, pos)    (!!((n) & (1U<<pos)))

#define TOGGLE_BIT(n, pos)    ((n) ^ (1U<<pos))

#define COMPLEMENT8(num)      ((uint8_t)(~(uint8_t)num))   

#define COMPLEMENT32(num)     ((uint32_t)(~(uint32_t)num))   

#define COMPLEMENT16(num)     ((uint16_t)(~(uint16_t)num))

#define COMPLEMENT64(num)     ((uint64_t)(~(uint64_t)num))

#define UNSET_BIT32(n, pos)    ((uint32_t)((uint32_t)(n) & ~(uint32_t)(1U<<pos)))

#define UNSET_BIT64(n, pos)    ((uint64_t)((uint64_t)(n) & ~(uint64_t)(1U<<pos))) 

#define UNSET_BIT16(n, pos)     ((uint16_t)((uint16_t)(n) & ~(uint16_t)(1U<<pos)))

#define UNSET_BIT8(n, pos)     ((uint8_t)((uint8_t)(n) & ~(uint8_t)(1U<<pos)))

#define SET_BIT(n, pos)        ((n) | (1U<<pos))

#endif