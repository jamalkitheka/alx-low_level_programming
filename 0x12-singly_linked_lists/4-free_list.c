#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: the head of the list to be freed
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *current, *nxt;

	current = head;
	while (current != NULL)
	{
		nxt = current->nxt;
		free(current->str);
		free(current);
		current = nxt;
	}
}
