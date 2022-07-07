#include "main.h"
/**
 * _isdigit -function to check for digit
 * @c: an integer argument
 * Return: 1 if success otherwise 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
