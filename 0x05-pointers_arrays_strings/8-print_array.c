#include "main.h"

/**
 * print_array - prints 'n' elements of an array of integers
 * @a: int type array pointer
 * @n: int type integer 
 * Return: a and n inputs
 */

void print_array(int *a, int n)
{
	int k;

	k = 0;
	for (n--; n >= 0; n--, k++)
	{
		printf("%d", a[k]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}


