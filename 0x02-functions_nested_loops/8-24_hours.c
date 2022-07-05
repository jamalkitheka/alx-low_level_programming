#include "main.h"
/**
 * jack_bauer - function that prints every minute of the day, 24 hour clock
 * h = hour, m = minutes
 * / 10 allows second digit to rotate
 * for loop breaks before passing 24:00
 * Return: 24 hour clock line by line
 */
void jack_bauer(void)
{
	int h, m, n, o, p, q;

	for (h = 0; h < 24; h++)
	{
		n = h / 10;
		o = h % 10;
		for (m = 0; m < 60; m++)
		{
			p = m / 10;
			q = m % 10;
			_putchar('0' + n);
			_putchar('0' + o);
			_putchar(':');
			_putchar('0' + p);
			_putchar('0' + q);
			_putchar('\n');
		}
	}
}
