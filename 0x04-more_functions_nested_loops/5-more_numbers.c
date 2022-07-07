#include "main.h"

/**
 * more_numbers - prints more numbers
 * Return: Always 0.
 */

void more_numbers(void)
{
	int r, l;

	for (r = 0; r < 10; r++)
	{
		for (l = 0; l <= 14; l++)
		{
			if (l > 9)
				_putchar(l / 10 + '0');
			_putchar(l % 10 + '0');
		}
		_putchar('\n');
	}
}
