#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int x;
	char *arg;

	va_start(valist, n);
	for (x = 0; x < n; x++)
	{
		arg = va_arg(valist, char *);
		if (arg)
		{
			printf("%s", arg);
		}
		else
		{
			printf("%p", arg);
		}
		if (separator && x < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(valist);
}
