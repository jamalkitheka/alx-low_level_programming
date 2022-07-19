#include "main.h"

/**
 * _strstr - function that locates a substring.
 *@haystack: string
 * @needle: string substring
 * Return: Pointer to beginning of substring, or NULL if not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *pn;
	char *ph;

	ph = needle;
	for (; *haystack != 0; haystack++)
	{
		for (pn = needle, ph = haystack; *pn == *ph && *pn; pn++, ph++)
			;
		if (*pn == '\0')
			return (haystack);
	}
	return (NULL);
}
