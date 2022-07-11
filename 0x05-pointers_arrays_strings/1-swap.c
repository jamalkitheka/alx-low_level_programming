#include "main.h"


/**
 * swap_int - given two integers swap the values they are holding
 * @a: parameter 1
 * @b: parameter 2
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int h;

	h = *a;
	*a = *b;
	*b = h;
}
