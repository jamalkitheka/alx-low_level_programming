#include "main.h"

/**
 * factorial - function that compute the factorial of a number
 * @n: the integer
 * 
 * Return: the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if(n < 2)
		return (n);
	else
		return (n * factorial(n -1));
	
}
