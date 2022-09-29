#include "lists.h"

/**
 * dlistint_len - Find the number of nodes in a doubly linked list
 * @h: head pointer
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp;
	size_t count;

	tmp = h;
	count = 0;
	while (tmp)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}
