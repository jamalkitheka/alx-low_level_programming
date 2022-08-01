#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Owner's name
 * Return: Owner's name
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *d;
	int x, y, z;
	char *n, *o;

	d = malloc(sizeof(struct dog));
	if (d == NULL)
	{
		return (NULL);
	}
	for (x = 0; name[x] != '\0'; x++)
		;
	for (y = 0; owner[y] != '\0'; y++)
		;
	n = malloc(sizeof(char) * x + 1);
	if (n == NULL)
	{
		free(d);
		return (NULL);
	}
	o = malloc(sizeof(char) * y + 1);
	if (o == NULL)
	{
		free(n);
		free(d);
		return (NULL);
	}
	for (z = 0; z <= x; z++)
		n[z] = name[z];
	for (z = 0; z <= y; z++)
		o[z] = owner[z];
	d->name = n;
	d->age = age;
	d->owner = o;
	return (d);
}
