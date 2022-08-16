#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: Pointer to the actual position
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *hold;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		hold = *head;
		*head = (*head)->next;
		free(hold);
	}
}
