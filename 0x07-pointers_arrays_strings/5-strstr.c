#include "main.h"

/**
 * _strstr - function that locates a substring.
 *@haystack: string
 * @needle: string substring
 * Return: Pointer to beginning of substring, or NULL if not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int x, y, c;

	x = 0;
	c = 0;
	while (haystack[x] != '\0')
	{
		y = 0;
		while (needle[y + c] != '\0' && haystack[x + c] != '\0'
		       && needle[y + c] == haystack[x + c])
		{
			if (haystack[x + c] != needle[y + c])
				break;
			c++;
		}
		if (needle[y + c] == '\0')
			return (&haystack[x]);
		y++;
		x++;
	}
	return (NULL);
}
