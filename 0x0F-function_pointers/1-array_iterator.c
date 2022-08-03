#include "function_pointers.h"

/**
 * array_iterator - execute function given as param on each element of an array
 * @array: Array
 * @size: size
 * @action: Pointer to the action to be executed
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}

}
