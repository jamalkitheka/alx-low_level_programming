#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: unsigned int
 * Return: pointer to allocated memory if successful, else 98
 */

void *malloc_checked(unsigned int b)
{
	int *t;

	t = malloc(b);
	if (t == NULL)
	{
		exit(98);
	}
	return (t);
}
