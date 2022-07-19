#include "main.h"

/**
 * _memcpy -  function that copies memory area.
 * @dest: char array to copy into
 * @src: char array to copy from
 * @n: number of elements to copy
 * Return: Returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
