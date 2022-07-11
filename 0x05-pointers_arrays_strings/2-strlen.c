#include "main.h"

/**
 * _strlen - function to get the length of a string
 * @s: string pointer to pass to this function
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int i = 1, sum = 0;
	char pl = s[0];

	while (pl != '\0')
	{
		sum++;
		pl = s[i++];
	}
	return (sum);
}
