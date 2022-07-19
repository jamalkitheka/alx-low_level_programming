#include "main.h"
/**
 * _strchr - function that locates a character in a string.
 * @s: char string array
 * @c: char to find
 * Return: a pointer to the first occurrence of the character  'c'
 * in the string s, or NULL.
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; *(s + x); x++)
	{
		if (*(s + x) == c)
			return (s + x);
	}
	if (*(s + x) == c)
		return (s + x);
	return (0);
}
