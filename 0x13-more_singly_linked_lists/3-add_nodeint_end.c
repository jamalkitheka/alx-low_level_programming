#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of a `listint_t` list
 * @head: double pointer to head node
 * @n: int value to store in new node
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last;
	int val = n;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = val;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	return (*head);
}
