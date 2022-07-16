#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string.
 * @n: string to capitalize
 * Return: pointer to the capitalized string
 */

char *cap_string(char *n)
{
	char *r = n;
	char a[] = " \t\n,;.!?\"(){}";
	int i;
	int cs = 1;

	while (*n)
	{
		if (cs && *n >= 'a' && *n <= 'z')
			*n -= 32;
		cs = 0;
		for (i = 0; i < 12; i++)
		{
			if (*n == a[i])
				cs = 1;
		}
		n++;
	}
	return (r);
}
