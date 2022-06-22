#include "main.h"
#include <stdlib.h>

/**
 * array_range - create array of integers, containing all values from min
 * to max, in that order
 *
 * @min: int
 * @max: int
 *
 * Return: a pointer to the array, but if min is greater than max, or if
 * malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *array;
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
