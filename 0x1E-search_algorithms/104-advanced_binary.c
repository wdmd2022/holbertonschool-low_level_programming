#include "search_algos.h"

/**
 * ll_cool_binary - searches for a value in a sorted array of integers
 * @array: the array in which we shall search
 * @target: the value which we pursue
 * @lefty: index location for the left side
 * @righty: index location for the right size
 * Return: -1 on failure. Else, index location of match
 */
int ll_cool_binary(int *array, int target, size_t lefty, size_t righty)
{
	size_t i;

	if (righty < lefty)
	{
		return (-1);
	}
	printf("Searching in array: ");
	for (i = lefty; i < righty; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[i]);
	i = (lefty + righty) / 2;
	if (array[i] == target && array[i - 1] != target)
	{
		return (i);
	}
	if (array[i] >= target)
	{
		return (ll_cool_binary(array, target, lefty, i));
	}
	return (ll_cool_binary(array, target, i + 1, righty));
}

/**
 * advanced_binary - uses an advanced version of binary search to ensure
 * that each value reported is the first occurence. Uses recursion.
 * @array: the array in which we shall search
 * @size: size_t type, size of array (number of elements)
 * @value: target to match
 * Return: -1 if value not present in array or if array is NULL, else
 * function returns index location where 'value' is located
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (ll_cool_binary(array, value, 0, size - 1));
}
