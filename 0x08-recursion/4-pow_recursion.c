#include "main.h"

/**
 * _pow_recursion - function that raise value of x to power y
 * @x: the base
 * @y: the value to raise x
 * Return: x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	return (y > 0 ? x * _pow_recursion(x, y - 1) : 1);
}
