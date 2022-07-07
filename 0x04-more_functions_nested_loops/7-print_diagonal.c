#include "main.h"

/**
 * print_diagonal - printing line
 * @n: integer parameter
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
		_putchar('\n');
	for (x = 1; x <= n; x++)
	{
		for (y = 1; y < x; y++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
