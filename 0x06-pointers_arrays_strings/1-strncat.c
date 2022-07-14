#include "main.h"

/**
 * _strncat - function to concatenate two strings
 * @dest:first parameter
 * @src: second parameter
 * @n: number of elements to concat
 * Return: pointer to resulting 'dest'
 */

char *_strncat(char *dest, char *src, int n)
{
	int t, x;

	for (t = 0; dest[t] != '\0'; t++)
		;
	for (x = 0; src[x] != '\0' && n > 0; x++, n--, t++)
	{
		dest[t] = src[x];
	}
	return (dest);
}
