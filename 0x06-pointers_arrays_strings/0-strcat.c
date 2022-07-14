#include "main.h"

/**
 * _strcat - this is a function strcat
 * @dest: first param
 * @src: second parameter
 * Return:  a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char *n = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (n);
}
