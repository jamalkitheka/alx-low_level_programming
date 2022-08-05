#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list valist;

	va_start(valist, n);
	for (x = 0; x < n; x++)
	{
		printf("%d", var_arg(vlist, int));
		if (separator && x != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(vlist);
}