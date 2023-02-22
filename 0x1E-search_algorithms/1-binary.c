#include "search_algos.h"

/**
 * binary_search - search for a value in a sorted array of integers
 * using the binary search algo
 * @array: pointer to the array in which we shall search
 * @size: size_t type, size of the array
 * @value: int, the value we are searching for
 * Return: -1 if value is not present in array, or if array is NULL
 * otherwise, return the index where the value is located
 */
int binary_search(int *array, size_t size, int value)
{
	int i, ll_cool_size;
	int *brray = array;

	if (!array)
	{
		return (-1);
	}
	ll_cool_size = (int)size;
	while (ll_cool_size)
	{
		printf("Searching in array: ");
		for (i = 0; i < ll_cool_size; i++)
		{
			if (i == ll_cool_size - 1)
			{
				printf("%d\n", brray[i]);
			}
			else
			{
				printf("%d, ", brray[i]);
			}
		}
		i = (ll_cool_size - 1) / 2;
		if (brray[i] == value)
		{
			return ((brray - array) + i);
		}
		else if (brray[i] > value)
		{
			ll_cool_size = i;
		}
		else
		{
			brray += i + 1;
			ll_cool_size -= i + 1;
		}
	}
	return (-1);
}
