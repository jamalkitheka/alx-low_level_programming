#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Initialize the variable of type struct dog
 * @d: pointer to a s struct dog
 * @name: Name of the dog
 * @age: Age of dog
 * @owner: owner's name
 * Return: void
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
