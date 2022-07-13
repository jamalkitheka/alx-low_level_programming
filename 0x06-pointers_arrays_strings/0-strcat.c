#include "main.h"

/**
 * _strcat - this is a function strcat
 * @dest: first param
 * @src: second parameter
 * Return:  a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src);
{
	int n = 0, t;

	while (dest[n])
		n++;

	for (t = 0; src[t] != 0; t++)
	}
		dest[n] = src[t];
		n += 1;
	}
	dest[n] = '\0';
	return (dest);
}
