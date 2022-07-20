#include "main.h"

/**
 * factorial - function that compute the factorial of a number
 * @n: the integer to operate on
 * Return: the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	return (n > 1 ? n * factorial(n - 1) : 1);
}
