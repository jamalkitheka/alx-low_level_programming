#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 d array of integers.
 * @width: width of an array
 * @height: height of an array
 * Return: pointer to allocated array
 */
int **alloc_grid(int width, int height)
{
	int x, y, z, k;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(height * sizeof(int *));
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		a[x] = malloc(width * sizeof(int));
		if (a[x] == NULL)
		{
			for (y = x; y > 0; y--)
			{
				free(a[y]);
				free(a);
				return (NULL);
			}
		}
	}
	for (z = 0; z < height; z++)
	{
		for (k = 0; k < width; k++)
			a[z][k] = 0;
	}
	return (a);
}
