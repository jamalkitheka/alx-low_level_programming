#include "main.h"

/**
 * print_alphabet_x10 - prints the lowercase alphabets
 * only use _putchar twice
 * Return:0
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
