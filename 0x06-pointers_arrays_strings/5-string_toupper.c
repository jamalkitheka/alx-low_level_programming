#include "main.h"

/**
 * string_toupper -  function that changes all lowercase letters of a string to uppercase.
 * @s: string input
 * Return: uppercase of string
 */
char *string_toupper(char *s)
{
	char *r = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (r);
}

