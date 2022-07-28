#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: min value to include
 * @max: max value to include
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *s, x;

	if (min > max)
	{
		return (NULL);
	}
	s = malloc((max - min + 1) * sizeof(*s));
	if (s == NULL)
	{
		return (NULL);
	}
	for (x = 0; min <= max; x++, min++)
	{
		s[x] = min;
	}
	return (s);
}
