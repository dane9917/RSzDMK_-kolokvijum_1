/*
 * main.c
 *
 *  Created on: May 16, 2021
 *      Author: Dane Mijailovic
 */

#include"../biblioteka/usart.h"
#include"../pin_driver/pin.h"
#include"../tajmer/tajmer.h"
#include"../util/util.h"
#include<stdlib.h>
#include<avr/io.h>
#include<util/delay.h>

int main()
{
	int8_t broj[64];
	usartInit(9600);
	while(1)
	{
		usartPutString("unesite duzinu niza");
		while(!(usartAvailable()));
		_delay_ms(100);
		usartGetString(broj);
	}
	return 0;
}

