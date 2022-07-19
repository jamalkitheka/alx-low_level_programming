#include "main.h"
/**
 * _memset -  function that fills memory with a constant byte.
 * @s: char to be used a pointer
 * @b: char to fill the memory area to be filled
 * @n: number of bytes to be filled
 * Return: Pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
