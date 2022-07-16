#include "holberton.h"
/**
 * print_number - a function that prints an integer
 * @n: the integer to print
 * Return: an integer
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('_');
		if (n < -9)
			print_number(n / -10);
		_putchar('0' - n % 10);
	}
	else
	{
		if (n > 9)
			print_number(n / 10);
		_putchar(n % 10 + '0');
	}
}
