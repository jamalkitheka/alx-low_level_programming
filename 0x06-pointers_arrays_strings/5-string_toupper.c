#include "main.h"

/**
 * string_toupper -  function that changes all lowercase letters of a string to uppercase.
 * @s: string input
 * Return: uppercase of string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i++])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}
	return (s);
}

