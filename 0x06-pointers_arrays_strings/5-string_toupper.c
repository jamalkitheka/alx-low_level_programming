#include "main.h"

/**
 * string_toupper -  function that changes all lowercase letters of a string to uppercase.
 * @n: string input
 * Return: uppercase of string
 */
char *string_toupper(char *n)
{
	int k = 0;

	while (n[k])
	{
		if (n[k] >= 97 && n[k] <= 122)
			n[k] = n[k] - 32;
		k++
	}
	return (n);
}


