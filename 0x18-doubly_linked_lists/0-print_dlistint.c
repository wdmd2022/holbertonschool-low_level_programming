#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: constant dlistint_t type list node
 * Return: size_t type, number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++, h = h->next)
	{
		printf("%i\n", h->n);
	}
	return (i);
}
