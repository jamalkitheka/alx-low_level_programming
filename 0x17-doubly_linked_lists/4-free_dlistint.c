#include "lists.h"

/**
 * free_dlistint - free a `dlistint_t` doubly linked list
 * @head: head pointer
 * Return: none
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head;
		head = tmp->next;
		free(tmp);
	}
}
