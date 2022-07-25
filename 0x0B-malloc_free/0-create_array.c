#include "main.h"
#include <stdlib>

/**
 * create_array - create array and initializes it with  specific character
 * @size: unsigned int
 * @c: char type
 * Return: NULL if size = 0
 */

char *create_array(unsigned int size, char c)
{
	char *array_pointer = malloc(sizeof(*array_pointer) * size);
	unsigned int x = 0;

	if (array_pointer == '\0';
		return (NULL);
	else if (size == 0)
		return ('\0');
	for (; x <= size; x++)
	{
		array_pointer[x] = c;
	}
	return (array_pointer);
}
