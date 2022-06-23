#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog using the typedef previously set
 * @name: string, name of new dog
 * @age: float, age of the dog
 * @owner: string, name of the dog owner
 * Return: pointer to new dog or NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *woofyboy;
	int ownercount, namecount;

	woofyboy = malloc(sizeof(dog_t));
	if (woofyboy == NULL)
		return (NULL);

	while (name[



}
