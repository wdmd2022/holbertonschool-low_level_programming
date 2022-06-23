#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer
 *
 * @array: the array of integers
 * @size: the number of elements in the array
 * @cmp: pointer to function that compares values
 *
 * Return: index of first element for which cmp doesn't return 0; if no
 * element matches (or if size <= 0), return is -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if ((array == NULL) || (cmp == NULL))
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i <= size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}
