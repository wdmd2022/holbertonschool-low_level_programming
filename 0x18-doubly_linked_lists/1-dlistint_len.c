#include "lists.h"

/**
 * dlistint_len - prints all the elements of a dlistint_t list
 * @h: constant dlistint_t type list node
 * Return: size_t type, number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++, h = h->next)
	{
		;
	}
	return (i);
}
