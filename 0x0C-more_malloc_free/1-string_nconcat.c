#include "main.h"

/**
 * *string_nconcat - concatenates two strings
 * @s1: first string input
 * @s2: second string input
 * @n: number of s2 bytes to be concatenated to s1
 * Return: pointer to resultant string, else null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int x = 0, y = 0, z = 0, sum, num;
	char *s;

	while (s1[x])
	{
		x++;
	}
	sum = n + x + 1;
	num = n + 0;
	s = malloc(sum * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	while (y < x)
	{
		s[y] = s1[y];
		y++;
	}
	while (z < num)
	{
		s[y] = s2[z];
		y++;
		z++;
	}
	s[y] = '\0';
	return (s);
}
