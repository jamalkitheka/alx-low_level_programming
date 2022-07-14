#include "main.h"

/**
 * _strncpy - Copy a string strting from index 0 of 'dest'.
 * @dest: string
 * @src: string
 * @n: number of chars to copy
 * Return: 'dest' edited string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int s;

	for (s = 0; src[s] != '\0'; s++)
		if (s < n)
			dest[s] = src[s];
	while (s < n)
		dest[s++] = '\0';
	return (dest);
}
