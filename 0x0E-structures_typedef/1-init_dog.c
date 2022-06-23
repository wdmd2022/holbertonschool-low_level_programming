#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - initializes a variable of the type struct dog
 * @d: pointer to the dog structure
 * @name: string, name of the dog
 * @age: float, age of the dog (in human years)
 * @owner: string, name of the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
