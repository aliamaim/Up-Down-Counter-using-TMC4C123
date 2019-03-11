#include "std_types.h"


/* Port Indexes */

#define PORTA (0u)
#define PORTB (1u)
#define PORTC (2u)
#define PORTD (3u)
#define PORTE (4u)
#define PORTF (5u)

/* Enumerations */
enum Port_PinDirectionType{PORT_PIN_IN, PORT_PIN_OUT};

enum Dio_LevelType{STD_LOW, STD_HIGH};


/* Port Driver */

/*
 * Initialize port based on the port_index
 * instead of using numbers, PORTA, PORTB,
 * PORTC, PORTD, PORTE & PORTF can be used
 * 1. Enable the clock for the port
 * 2. Unlock the port
 * 3. Set mode to digital
 * Example: Port_Init(PORTA)
 */
void Port_Init(uint8 port_index);


/*
 * Change the direction of the SELECTED PINS by pins_mask
 * in the port selected by port_index
 * Example: Port_SetPinDirection(PORTA, 0x000000AC, PORT_PIN_OUT);
 * Note that 0xA is equivalent to 0b1010 & 0xC to 0b1100
 * this example would set pin number 2, 3, 5, 7 to output pins
 */
void Port_SetPinDirection(uint8 port_index, uint8 pins_mask, Port_PinDirectionType pins_direction);





/* DIO Driver */
