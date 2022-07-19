#include "main.h"

/**
 * _strstr - function that locates a substring.
 *@haystack: string
 * @needle: string substring
 * Return: Pointer to beginning of substring, or NULL if not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *n;
	char *h;

	h = needle;
	for (; *haystack != 0; haystack++)
	{
		for (n = needle, h = haystack; *n == *h && *n; n++, h++)
			;
		if (*n == '\0')
			return (haystack);
	}
	return (NULL);
}
