#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Finction that frees dogs.
 * @d: Pointer to a struct dog.
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
