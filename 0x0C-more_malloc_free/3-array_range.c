#include "main.h"
#include <stdlib.h>

/**
 * array_range - uses malloc to allocate memory for an array of nmemb elements of
 * size bytes each, returning a pointer to the allocated memory, all set to 0
 *
 * @min: unsigned int, how many elements
 * @max: unsigned int, how big each element is
 *
 * Return: a pointer to the allocated memory or NULL if nmemb or size are 0,
 * or if malloc fails
 */
int *array_range(int min, int max)
{
	int *array
	int i;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(*array) * ((max - min) + 1));

	if (array == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
	{
		array[i] = min;
	}
	return (array);
}
