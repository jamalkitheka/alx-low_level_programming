#include "main.h"

int str_count(char *str);

/**
 * str_concat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: s1 + s2
 */

char *str_concat(char *s1, char *s2)
{
	int x, y, z, w;
	char *s;

	x = str_count(s1);
	y = str_count(s2);
	if ((NULL == s1 || NULL == s2) || (NULL == s1 && NULL == s2))
	{
		return (NULL);
	}
	else
	{
		s = malloc(sizeof(char) * (x + y) + 1);
		if (s == NULL)
		{
			return (NULL);
		}
		for (z = 0; z < x; z++)
		{
			s[z] = s1[z];
		}
		for (; z < (x + y); z++)
		{
			s[z] = s2[w];
			w++;
		}
		s[z] = '\0';
	}
	return (s);
}

/**
 * str_count - counts the number of characters in a string
 * @str: pointer to string to be counted
 * Return: number of strings in the character
 */

int str_count(char *str)
{
	int x = 0;

	while (*str != '\0')
	{
		x++;
		str++;
	}
	return (x);
}
