#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @size: No of elements in array
 * @cmp: pointer for the function to be used to compare values
 * @array: array of inegers
 * Return: Index or -1 if error or not found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);
	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}
	return (-1);
}
