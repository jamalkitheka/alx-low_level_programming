#include "main.h"

/**
 * str_concat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: s1 + s2
 */

char *str_concat(char *s1, char *s2);
{
	int x, y, z, w = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[x])
		x++;
	while (s2[y])
		y++;
	z = x + y;
	s = (char *)malloc(l * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);
	y = 0;
	while (w < z)
	{
		if (w <= x)
			s[w] = s1[w];
		if (w > x)
		{
			s[w] = s2[y];
			y++;
		}
		w++;
	}
	s[w] = '\0';
	return (s);
}
