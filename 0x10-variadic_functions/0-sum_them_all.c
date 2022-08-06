#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums all of its parameters
 * @n: number of parameter to be summed up
 * Return: sum of the parameter
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int x, sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(arg, n);
	for (x = 0; x < n; x++)
	{
		sum += va_arg(arg, unsigned int);
	}
	va_end(arg);
	return (sum);
}
