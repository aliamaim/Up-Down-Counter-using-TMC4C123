#ifndef APPLICATION_HEADER
#define APPLICATION_HEADER
#include <stdint.h>


/*
* Check if a certain pin in the choosen port is pressed
* Taking into consideration the bouncing effect
*/
uint8_t Is_Pressed(uint8_t port_index, uint8_t pin);


/*
* Update the LCD with the global variable counter_g value
*/
void Update_LCD(void);


/*
* If a certain pin in the choosen port is pressed
* keep incrementing the global variable counter_g
* until the button is released
* with 0.2 second intervals between each increment 
*/
void Increment_If(uint8_t port_index, uint8_t pin);


/*
* If a certain pin in the choosen port is pressed
* decrement the global variable counter_g
* only one time even if the button is still pressed
*/
void Decrement_If(uint8_t port_index, uint8_t pin);

/*
* If a certain pin in the choosen port is pressed
* reset the global variable counter_g to 000
* only apply the reset when the button is released
*/
void Reset_If(uint8_t port_index, uint8_t pin);


#endif
