#include "lists.h"

/**
 * listint_len - returns the number of elements in a listin_t int
 * @h: pointer to the first element
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t county = 0;

	while (h != NULL)
	{
		county++;
		h = h->next;
	}
	return (county);
}
