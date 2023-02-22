#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of ints
 * using the linear search algo
 * @array: array in which to search
 * @size: size_t type, size of array
 * @value: int we are searching for
 * Return: -1 if value not present or array is NULL, otherwise
 * return first index of array where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	int i, ll_cool_size;

	if (array == NULL)
	{
		return (-1);
	}
	ll_cool_size = (int)size;
	for (i = 0; i < ll_cool_size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
