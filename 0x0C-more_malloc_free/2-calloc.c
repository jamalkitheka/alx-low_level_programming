#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements
 * @size: size of each element
 * Return: Null if error, else pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *s;
	unsigned int x;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	for (x = 0; x < nmemb; x++)
		s[x] = 0;
	return (s);

}
