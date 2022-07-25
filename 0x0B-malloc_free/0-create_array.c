#include "main.h"
#include <stddef.h>

/**
 * create_array - create array and initializes it with  specific character
 * @size: size of array to be created
 * @c: char an array is initialized with
 * Return: Pointer to an array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *s;

	if (size == 0)
		return (NULL);
	s = (char *)malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		s[x] = c;
	return (s);
}
