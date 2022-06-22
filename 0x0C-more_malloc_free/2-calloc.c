#include "main.h"
#include <stdlib.h>

/**
 * _calloc - uses malloc to allocate memory for an array of nmemb elements of
 * size bytes each, returning a pointer to the allocated memory, all set to 0
 *
 * @nmemb: unsigned int, how many elements
 * @size: unsigned int, how big each element is
 *
 * Return: a pointer to the allocated memory or NULL if nmemb or size are 0,
 * or if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *new;
	unsigned int county;

	if (nmemb == 0 || size == 0)
		return (NULL);
	new = malloc(nmemb * size);

	if (new == NULL)
		return (NULL);

	for (county = 0; county < (nmemb * size); county++)
	{
		new[county] = 0;
	}
	return (new);
}
