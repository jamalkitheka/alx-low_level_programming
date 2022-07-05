#include "holberton.h"

/**
 * print_alphabet_x10 - Entry point
 * only use _putchar twice in your code
 *  Return: 0
 */

void print_alphabet_x10(void)
{
	int n = 10;
	int c;
	
	for (n = 0; n < 10; n++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
