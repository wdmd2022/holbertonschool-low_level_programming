#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - frees dogs
 * @d: a pointer to a dog structure
 * Return: nothing because it is void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
