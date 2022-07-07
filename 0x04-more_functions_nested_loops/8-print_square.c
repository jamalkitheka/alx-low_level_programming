#include "main.h"
#include <stdio.h>

/**
 * print_square - printing line
 * @size: size of square
 * Return: always 0.
 */

void print_square(int size)
{
	int x = 0, s = 0;

	if (size > 0)
	{
		while (x < size)
		{
			while (s < size)
			{
				_putchar('#');
				s++;
			}
			_putchar('\n');
			s = 0;
			x++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
