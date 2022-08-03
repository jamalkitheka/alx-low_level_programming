#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: print a name
 * @f: pointer to function
 * Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
