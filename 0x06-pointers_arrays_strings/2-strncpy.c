#include "main.h"

/**
 * _strncopy - copies a string from index 0 of 'dest'
 * @dest: first parameter
 * @src: second parameter
 * @n: Number of chars to copy
 * Return: edited string
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
