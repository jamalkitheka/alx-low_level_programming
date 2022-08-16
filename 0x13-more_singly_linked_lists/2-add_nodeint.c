#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: Pointer to the actual position of the linked list
 * @n: Value to include in the new node
 * Return: the address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *hold;
	listint_t *new_node;

	hold = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	*head = new_node;
	if (hold == NULL)
	{
		new_node->next = NULL;
	}
	else
	{
		new_node->next = hold;
	}
	return (new_node);
}
