#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: double pointer to head
 * @idx: insert node at this index, starting count at 0
 * @n: value to store in node
 *  Return: Address of new node or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new;
	listint_t *tmp = *head;

	if (head == NULL)
		return (NULL);
	if (idx == 0)
	{
		tmp = add_nodeint(head, n);
		return (tmp);
	}
	while (i < idx)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
		i++;
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = tmp->n;
	new->next = tmp->next;
	tmp->n = n;
	tmp->next = new;
	return (tmp);
}

/**
 * add_nodeint - adds a new node at the beginning of a list_t list
 * @head: Pointer to the actual position of the linked list
 * @n: Value to include in the new node
 * Return: Size of the linked_list.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
