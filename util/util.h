/*
 * util.h
 *
 *  Created on: May 16, 2021
 *      Author: Dane Mijailovic
 */

#ifndef UTIL_H_
#define UTIL_H_
#include <avr/io.h>
#include <stdint.h>
void Sort(int16_t *array, int16_t array_length, int8_t mode);

int8_t Check(int16_t *array);

#endif /* UTIL_H_ */
