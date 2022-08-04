#include "variadic_functions.h"

/**
 * sum_them_all - sums all of its parameters
 * @n: number of parameter to be summed up
 * Return: sum of the parameter
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int x;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(p, n);
	for (x = 0; x < n; x++)
	{
		sum += va_arg(p, int);
	}
	va_end(p);
	return (sum);
}
