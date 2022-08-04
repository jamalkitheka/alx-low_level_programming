#include "variadic_function.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vlst;
	unsigned int x;
	char *p;

	if (n > 0)
	{
		va_start(vlst, n);
		for (x = 1; x <= n; x++)
		{
			p = va_arg(vlst, char *);
			if (p == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", p);
			}
			if (x != n && separator != NULL)
			{
				printf("%s", separator);
			}
		}
		va_end(vlst);
	}
	printf("\n");
}
