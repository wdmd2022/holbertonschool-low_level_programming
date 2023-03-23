#include "search_algos.h"

/**
 * linear_skip - implementation of linear skip search that
 * @list: pointer to the head of the skip list we wish to search in. Skip
 * list is sorted in ascending order.
 * @value: the value we are searching for.
 * Return: pointer to the first node on which the value is located. If value
 * not present in list, or if head is NULL, function returns NULL.
*/
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *surfer = NULL;

	if (!list)
		return (NULL);
	surfer = list;
	while (surfer->express)
	{
		printf("Value checked at index [%lu] = [%d]\n",
					surfer->express->index, surfer->express->n);
		if (surfer->express->n >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
							surfer->index, surfer->express->index);
			break;
		}
		surfer = surfer->express;
	}
	if (!surfer->express)
	{
		list = surfer;
		while (list->next)
		{
			list = list->next;
		}
		printf("Value found between indexes [%lu] and [%lu]\n", surfer->index,
																list->index);
	}
	list = surfer;
	while (list != surfer->express)
	{
		printf("Value checked at index [%lu] = [%i]\n", list->index, list->n);
		if (list->n == value)
			break;
		list = list->next;
	}
	if (list != surfer->express)
		return (list);
	else
		return (NULL);
}
