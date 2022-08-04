#include "variadic_functios.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list arg;

	if (separator == NULL)
	{
		return;
	}
	for (x = 1; x <= n; x++)
	{
		printf("%d", var_arg(arg, int));
		if (x != n)
		{
			printf(", ");
		}
	}
	printf("\n");
}

