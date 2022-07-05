#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @x: integer passed
 * Return: the last digit
 */

int print_last_digit(int x)
{
	int lst_dgit;
	lst_dgit = x % 10;
	lst_dgit = lst_dgit < 0 ? 0 - lst_dgit : lst_dgit;
	_putchar(lst_dgit + '0');
	return (lst_dgit);
}
