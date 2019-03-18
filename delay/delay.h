#ifndef DELAY_HEADER
#define DELAY_HEADER

#include <stdint.h>
include "tm4c123gh6pm_custom.h"

/*
* Halt the program for X microseconds specified by "delay"
* Using a timer
*/
void _delay_us(uint32_t delay);

/*
* Halt the program for X milliseconds specified by "delay"
* Using a timer
*/
void _delay_ms(uint32_t delay);

/*
* Halt the program for X nanoseconds specified by "delay"
* Using a timer
*/
void _delay_s(uint32_t delay);

#endif
