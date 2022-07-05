#include "main.h"

/**
 * print_alphabet_x10 - prints the lowercase alphabets
 * only use _putchar twice in your code
 *  Return: 0
 */

void print_alphabet_x10(void)
{
	int j;
	int m;
	
	for (m = 0; m < 10; m++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
