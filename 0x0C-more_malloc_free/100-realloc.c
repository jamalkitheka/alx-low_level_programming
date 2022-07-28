#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @old_size: size in bytes of allocated space for `ptr`
 * @new_size: size in bytes for new allocated spac
 * @ptr: pointer to previous memory block
 * Return: Pointer to new memory block, or NULL if error
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s, *cp;
	unsigned int x;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		s = malloc(new_size);
		if (s == NULL)
		{
			return (NULL);
		}
		return (s);
	}
	s = malloc(new_size);
	if (s == NULL)
	{
		return (NULL);
	}
	cp = ptr;
	for (x = 0; x < old_size; x++)
	{
		s[x] = cp[x];
	}
	free(ptr);
	return (s);
}
