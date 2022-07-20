#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 *
 * @s: string
 * Return:lenght of s
 */

int _strlen_recursion(char *s)
{
	return (*s ? _strlen_recursion(s + 1) + 1 : 0);
}
