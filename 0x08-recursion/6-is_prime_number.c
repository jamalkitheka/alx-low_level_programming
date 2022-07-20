#include "main.h"

/**
 * __is_prime_number - helper for _is_prime_number
 * @n: the number to check
 * @o: the current divison
 * Return: 1 if n is prime, otherwise 0.
 */

int __is_prime_number(int n, int o)
{
	if (n % o == 0)
		return (0);
	if (n < o * 2)
		return (1);
	return (__is_prime_number(n, o + 1));
}

/**
 * is_prime_number - determine if a number is prime
 * @n: the number to check
 * Return: 1 if the number is prime, otherwise 0.
 */
int is_prime_number(int n)
{
	if (n < 4)
		return (n > 1);
	return (__is_prime_number(n, 2));
}
