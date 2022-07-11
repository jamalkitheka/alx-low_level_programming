#include "main.h"


/**
 * print_rev - function that prints in reverse
 * @s: the string to be printed
 * Return: string, in reverse
 */

void print_rev(char *s)
{
	int f = 0;
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		f++;
	}

	for (y = (f - 1); y >= 0; y--)
	{
		_putchar(s[y]);
	}
	_putchar('\n');
}
