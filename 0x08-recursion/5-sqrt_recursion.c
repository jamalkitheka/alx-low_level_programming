#include "main.h"

/**
 * __sqrt_recursion - helper for _sqrt_recursion
 * @n: the number to compute the square root of
 * @o: the current divisor to test
 * Return: the natural square root of n,
 * or -1 if n has no natural square root
 */
int __sqrt_recursion(int n, int o)
{
	if (o * o < n)
		return (__sqrt_recursion(n, o + 1));
	return (o * o == n ? o : -1);
}

/**
 * _sqrt_recursion - compute the square root of a number
 * @n: the number to compute the square root of
 * Return: the natural square root of n,
 * or -1 if n has no natural square root
 */
int _sqrt_recursion(int n)
{
	return (__sqrt_recursion(n, 0));
}
