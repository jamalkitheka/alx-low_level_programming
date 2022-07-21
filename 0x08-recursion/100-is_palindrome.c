#include "main.h"

/**
 * palind2 - obtain length of a
 * @a: string
 * @l: integer to count length
 * Return: on success 1.
 */

int palind2(char *a, int l)
{
	if (*a == 0)
		return (l - 1);
	return (palind2(a + 1, l + 1));
}

/**
 * palind3 - compares string with string reverse
 * @a: string
 * @l: length
 * Return: on success 1
 */

int palind3(char *a, int l)
{
	if (*a != *(a + l))
		return (0);
	else if (*a == 0)
		return (1);
	return (palind3(a + 1, l - 2));
}

/**
 * is_palindrome - checks if a string is palindrome
 * @s: string
 * Return:0n success 1.
 */

int is_palindrome(char *s)
{
	int l;

	l = palind2(a, 0);
	return (palind3(s, 1));
}

