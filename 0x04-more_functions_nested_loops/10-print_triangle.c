#include "main.h"

/**
 * print_triangle - prints triangles aligned right, using '#'
 * @size: the size of line
 * Return: 0
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
		_putchar('\n');
	for (i = 1; i <= size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(' ');
		}
		for (k = 1; k <= i; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
