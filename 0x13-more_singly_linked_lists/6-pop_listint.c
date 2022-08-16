#include "lists.h"

/**
 * pop_listint - Delete the head node of a `listint_t` linked list
 * @head: double pointer to head node of linked list
 * Return: head nodes data `n`
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int val;

	if (*head == NULL)
		return (0);
	tmp = *head;
	val = tmp->n;
	tmp = tmp->next;
	free(*head);
	*head = tmp;
	return (val);
}
