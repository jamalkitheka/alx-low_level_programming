#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: multidimensional array
 * @size: size of multidimensional array
 * Return: sum of the diagonal of the matrix
 */

void print_diagsums(int *a, int size)
{
	int x;
	int sum;
	int sum2;

	sum = 0;
	sum2 = 0;
	for (x = 0; x < size * size;)
	{
		sum = sum + a[x];
		x = x + size + 1;
	}
	for (x = size - 1; x < (size * size) - 1;)
	{
		sum2 = sum2 + a[x];
		x = x + (size - 1);
	}
	printf("%d, %d\n", sum, sum2);
}
