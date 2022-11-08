/*
 * translateWord.h
 *
 * Created: 10/23/2022 12:35:45 PM
 *  Author: PC
 */ 


#ifndef TRANSLATEWORD_H_
#define TRANSLATEWORD_H_

#include "STD_TYPE.h"
#include "LCD.h"
#include <string.h>

typedef enum
{
	no_word = 0,
	thats_amazing = 1,
	good = 2,
	perfect = 3
}words;


words TRANS_WORDS_get_word(U16_t reading0, U16_t reading1);
void TRANS_WORDS_print_word(words word);

#endif /* TRANSLATEWORD_H_ */