#include "lists.h"


/**
 * _strlen - finds the length of a string
 * @str: string
 * Return: string length
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
 * add_node - adds a new node at the beginning of a list_t list
 * @str: string
 * @head: double pointer to a lined list
 * Return: address of the new elemen
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = _strlen(new_node->str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
