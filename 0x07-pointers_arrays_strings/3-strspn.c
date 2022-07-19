#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: char string array
 * @accept: char array to check
 * Return: the number of bytes in the initial segment of 's'
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x;
	unsigned int y;
	unsigned int ls;
	unsigned int la;
	unsigned int n;

	n = 0;
	for (ls = 0; s[ls] != '\0'; ls++)
	{
	}
	for (la = 0; accept[la] != '\0'; la++)
	{
	}
	for (x = 0; x < ls; x++)
	{
		for (y = 0, n = 0; y < la; y++)
		{
			if (s[x] == accept[y])
				n++;
		}
		if (n == 0)
			return (x);
	}
	return (x);
}
