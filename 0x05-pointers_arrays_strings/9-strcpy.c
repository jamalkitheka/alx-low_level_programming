#include "main.h"

/**
 * char *_strcpy - copying string pointers
 * @dest: copy tp
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (*(src + y) != '\0')
	{
		y++;
	}
	for ( ; x < y ; x++)
	{
		dest[x] = src[x];
	}
	dest[y] = '\0';
	return (dest);
}
