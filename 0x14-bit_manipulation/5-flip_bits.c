#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * flip_bits - flip bits to convert one number to another number
 * @n: first number
 * @m: second number
 * Return: number of bits that was needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = 0;
	int x = 0, count = 0;

	diff = n ^ m;
	for (x = 0; x <= 63 ; x++)
	{
		if ((diff >> x) & 1)
			count++;
	}
	return (count);
}
