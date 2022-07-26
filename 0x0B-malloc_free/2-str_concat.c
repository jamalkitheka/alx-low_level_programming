#include "main.h"

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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (x = 0; s1[x] != '\0'; x++)
		;
	for (y = 0; s2[y] != '\0'; y++)
		;
	a = malloc((x * sizeof(*s1)) + (y * sizeof(*s2));
		if (s == NULL)
			return (NULL);
		for (z = 0, w = 0; z < (x + y + 1); z++)
		{
			if (z < x)
				s[z] = s1[z];
			else
				s[z] = s2[w++];
		}
	return (s);
}
