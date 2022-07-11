#include "main.h"

/**
 * puts2 - puts2 functions
 * @str: str parameter
 * Return:every other character of a string
 */

void puts2(char *str)
{
	int j = 0;

	for (; str[j] != '\0'; j++)
	{
		if ((j % 2) == 0)
			_putchar(str[j]);
		else
			continue;
	}
	_putchar('\n');
}
