/*
 * lcd.h
 *
 *  Created on: Jun 6, 2019
 *      Author: LENOVO
 */

#ifndef LCD_H_
#define LCD_H_

#include "common_macros.h"
#include "data_type.h"
#include "micro_config.h"
#include "stdlib.h"
/*
 * Pin mode
 	 * 8 for 8-bit mode.
 	 * 4 for 4-bit mode.
 */
#define LCD_MODE 4


#if LCD_MODE == 4
//By Default in 4-bit mode .. we use high nibble of connected PORT .. remove comment definition to let low nibble.
//#define HIGH_PINS
#endif
#define LCD_DDR  DDRD
#define LCD_PORT PORTD
#define LCD_PIN  PIND


/*
 * Pins
 */
#define LCD_CONTROL_DDR DDRD
#define LCD_CONTROL_PORT PORTD
#define LCD_RS         PD5
#define LCD_RW         PD6
#define LCD_ENABLE_PIN PD7


/*
 * Init LCD.
 */
void LCD_init();

/*
 * LCD send Command.
 */
void LCD_sendCommand(uint8 cmd);

/*
 * LCD display Character.
 */
void LCD_displayCharacter(uint8 character);

/*
 * Go to row column.
 */
void LCD_goToRowColumn(uint8 row, uint8 col);


/*
 * Display string at specific location.
 */

void LCD_displayStringRowCol(uint8* string, uint8 row, uint8 col);


/*
 * Clear Screen.
 */
void LCD_clearScreen();

/*
 * Integer to ascii.
 */
void LCD_integerToString(uint16 number);
/*
 * Display string.
 */
void LCD_displayString(uint8* string);


#endif /* LCD_H_ */
