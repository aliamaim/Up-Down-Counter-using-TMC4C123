#ifndef APPLICATION_HEADER

#define APPLICATION_HEADER

#include <stdint.h>
#include "MCAL.h"

#define BUTTONS_PORT PORTF    //Buttons will be connected to PORTD
#define INCREMENT_BUTTON 0x02 //Increment button is at PIN1 00000001
#define DECREMENT_BUTTON 0x04 //Decrement button is at PIN2 00000010
#define RESET_BUTTON 0x08   //Reset button is at PIN3 00000100


#define COUNTER1_PORT PORTB
#define COUNTER2_PORT PORTE
#define COUNTER3_PORT	PORTD

#define COUNTER1_MASK 0x0F
#define COUNTER2_MASK 0x0F
#define COUNTER3_MASK 0x0F


/*

* Check if a certain pin in the choosen port is pressed

* Taking into consideration the bouncing effect

*/

uint8_t Is_Pressed(uint8_t port_index, uint8_t pin);





/*

* Update the LCD with the global variable counter_g value

*/






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




void Update_Decoder(void);

#endif

