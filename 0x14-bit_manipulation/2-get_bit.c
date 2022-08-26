#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: Decimal number
 * @index: Index
 * Return: value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int x = 0;

	if (index > 63)
		return (-1);
	x = n >> index;
	if (x & 1)
		return (1);
	return (0);
}
