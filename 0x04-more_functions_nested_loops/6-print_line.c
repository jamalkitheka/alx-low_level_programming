#include "main.h"

/**
 * print_line - printing line
 * @n: integer parameter
 * Return: always 0.
 */

void print_line(int n)
{
	int t = 1;

	for (t = 1; t <= n; t++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
