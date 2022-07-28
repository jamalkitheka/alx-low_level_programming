#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: min value to include
 * @max: max value to include
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *s;
	int p, x = 0;

	if (min > max)
	{
		return (NULL);
	}
	p = max - min + 1;
	s = malloc(p * sizeof(int));
	if (s == NULL)
	{
		return (NULL);
	}
	while (x <= p)
	{
		s[x] = min;
		x++;
		min++;
	}
	return (s);
}
