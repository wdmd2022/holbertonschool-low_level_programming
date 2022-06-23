#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function (param) on each element of an array
 *
 * @array: the array
 * @size: size of the array
 * @action: pointer to the function
 *
 * Return: nothing at all
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int county;

	if ((array == NULL) || (action == NULL))
	{
		return;
	}
	for (county = 0; county < size; county++)
	{
		action(array[county]);
	}
}
