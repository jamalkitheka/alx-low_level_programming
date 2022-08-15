#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the start of the list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *current;
	size_t x;

	x = 0;
	current = h;
	while (current != NULL)
	{
		printf("[%d] %s\n", current->len, current->str);
		current = current->next;
		x++;
	}
	return (x);
}
