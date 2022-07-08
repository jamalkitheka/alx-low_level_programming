#include "main.h"

/**
 * print_triangle - prints triangles
 * @size: the size of line
 * Return: 0
 */

void print_triangle(int size)
{
	int r, s, t;

	if (size <= 0)
		_putchar('\n');
	for (r = 1; r <= size; r++)
	{
		for (s = 0; s < size; s++)
		{
			_putchar(' ');
		}
		for (t = 1; t <= r; t++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
