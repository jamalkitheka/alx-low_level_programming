#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string.
 * @n: string to capitalize
 * Return: pointer to the capitalized string
 */

char *cap_string(char *n)
{
	char *ws = " \t\n,;.!?\"(){}";
	int x;
	int y;

	for (x = 0, y = 0; n[x]; ++x)
	{
		if ('a' <= n[x] && n[x] <= 'z')
		{
			if (x)
			{
				for (y = 0; ws[y] && ws[y] != n[x - 1]; ++x)
					;
			}
			if (ws[y])
				n[x] -= ('a' - 'A');
		}
	}
	return (n);
}
