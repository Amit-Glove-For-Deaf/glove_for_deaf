/*
 * translateWord.c
 *
 * Created: 10/23/2022 12:36:03 PM
 *  Author: PC
 */ 

#include "translateWord.h"

#define THRESH_0 255		//thumb threshold
#define THRESH_1 55		//index threshold

//Threshold needs to be adjusted for calibration

words TRANS_WORDS_get_word(U16_t reading0, U16_t reading1) //Gets the word from the readings of the sensors
{
	U8_t flag0 = 0, flag1 = 0;
	if (reading0 < THRESH_0)
		flag0 = 1;
	if (reading1 < THRESH_1)
		flag1 = 1;
	return flag0 | (flag1 << 1);
}

void TRANS_WORDS_print_word(words word)	//Prints the word on the LCD
{
	char str[20];
	switch (word)
	{
		case no_word:
		strcpy(str, "                        ");
		break;
		case thats_amazing:
		
		strcpy(str, "That's amazing!");
		
		break;
		case good:
		LCD_F_Write_String("                  ");
		strcpy(str, "Good!!");
		break;
		case perfect:
		LCD_F_Write_String("                  ");
		
		strcpy(str, "Perfect!!");
		break;
	}
	//Clear the display here if needed
	LCD_F_Go_To(0, 0);
	LCD_F_Write_String(str);
	
}