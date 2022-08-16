#include "lists.h"

/**
 * sum_listint - get the sum of all the int `n` of a `listint_t` linked list
 * @head: pointer to head
 * Return: sum of all int `n`
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	if (tmp == NULL)
		return (0);
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
