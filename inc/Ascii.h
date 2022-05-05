/**
 * @file Ascii.h
 * @author M Banu Prakash Reddy (banuprakashreddy24@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-05-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef ASCII_H
#define ASCII_H


#include <stdio.h>
#include <stdint.h>
#include <string.h>

union mychar
{
	uint8_t string1[100];
	int sum,len;
}Name;

#endif