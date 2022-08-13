#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the start of the list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *c;
	unsigned int x;

	c = h;
	for (x = 0; c; x++;)
	{
		printf("[%u] %s\n", c->len, c->str);
		c = c->next;
	}
	return (x);
}
