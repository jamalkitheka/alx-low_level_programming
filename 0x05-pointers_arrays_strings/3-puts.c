#include "main.h"

/**
 * _puts - function that prints a string
 * @str: a parameter to _puts function
 * Return: String
 */

void _puts(char *str)
{
	int t;

	for (t = 0; str[t] != '\0'; t++)
	{
		_putchar(str[t]);
	}
	_putchar('\n');
}
