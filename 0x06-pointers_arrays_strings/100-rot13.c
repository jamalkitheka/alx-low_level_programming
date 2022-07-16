#include "main.h"

/**
 * rot13 - function used to encode string
 * @s: input
 * Return: encoded string
 */

char *rot13(char *s)
{
	char f, *r = s;

	while (*s)
	{
		f = (*s & 32) + 65;
		if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
			*s = (*s - f + 13) % 26 + f;
		s++;
	}
	return (r);
}
