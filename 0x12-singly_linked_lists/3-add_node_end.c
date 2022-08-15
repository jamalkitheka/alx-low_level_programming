#include "lists.h"

/**
 * _strlen - finds the length of a string
 * @str: string
 * Return: length of string
 */

unsigned int _strlen(char *str)
{
	unsigned int x;

	for (x = 0; str[x]; x++)
	{
		;
	}
	return (x);
}

/**
 * add_node_end - adds new node at the end of a list
 * @head: double pointer to a linked list
 * @str: string
 * Return: address of the new element if successful, else NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current;

	if (str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = _strlen(new_node->str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	current = *head;
	while (current->next)
		current = current->next;
	current->next = new_node;
	return (new_node);
}
