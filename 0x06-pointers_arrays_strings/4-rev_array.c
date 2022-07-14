#include "main.h"

/**
 * reverse_array - reverse the contents of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int j, t;

	for (j = 0; j < n; j++)
	{
		n--;
		t = a[j];
		a[j] = a[n];
		a[n] = t;
	}
}
