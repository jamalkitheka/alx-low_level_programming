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
	dog_t *my_dog;
	char *name_cpy;
	char *owner_cpy;

	name_cpy = malloc(sizeof(char) * _strlen(name));
	owner_cpy = malloc(sizeof(char) * _strlen(owner));
	if (name_cpy == NULL || owner_cpy == NULL)
	{
		free(name_cpy);
		free(owner_cpy);
		return (NULL);
	}
	_strcpy(name_cpy, name);
	_strcpy(owner_cpy, owner)
	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
	{
		free(name_cpy);
		free(owner_cpy);
		return (NULL);
	}
	my_dog->name = name_cpy;
	my_dog->age = age;
	my_dog->owner = owner_cpy;
	return (my_dog);
}

/**
 * _strcpy - Copy a string
 * @dest: Pointer to the string array for copying
 * @src: number of elements to extract
 * Return: Nothing
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (*(src + x) != '\0')
	{
		*(dest + x) = *(src + x);
		x++;
	}
	*(dest + x) = '\0';
	return (dest);
}

/**
 * _strlen - Determines the lenght of a string
 * @s: Set of characters
 * Return: Nothing
 */
int _strlen(char *s)
{
	int x = 0;

	while (*(s + x) != '\0')
	{
		x++;
	}
	x++;
	return (x);
}
