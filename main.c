/*
 * glove for deaf.c
 *
 * Created: 10/21/2022 7:53:52 PM
 * Author : MOMEN
 */ 


#include "DIO.h"
#include "ADC.h"

#include "translateWord.h"
#define F_CPU 16000000
#include <util/delay.h>
#define finger1 ADC_CHANNEL_0
#define finger2 ADC_CHANNEL_2
 int x,y;

int main(void)
{   
	
	LCD_F_Init();
	ADC_F_Init(ADC_VCC,ADC_PRESCALER_128);
	ADC_F_Start_Conversion(finger1);
	ADC_F_Start_Conversion(finger2);
	
   
    while (1) 
    {
		x=ADC_F_Read(ADC_CHANNEL_0);
		y=ADC_F_Read(ADC_CHANNEL_2);
// 		LCD_F_Go_To(0,0);
// 		LCD_F_Write_Number(y);
// 		LCD_F_Write_String("       ");
// 		LCD_F_Go_To(1,0);
// 		LCD_F_Write_Number(x);
// 		
// 	    
// 		LCD_F_Write_String("     ");
	
	
		
		TRANS_WORDS_print_word(TRANS_WORDS_get_word(x,y));
		
		
		
		
		// channel 0 <290
		//channel 2<65
		
		
    }
}

