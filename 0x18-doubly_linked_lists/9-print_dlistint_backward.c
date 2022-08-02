#include "lists.h"

/**
 * print_dlistint_backward - print all the elements of a dlistint_t list
 * but get this -- don't print them forwards -- print them backwards
 * @h: pointer to the first element of the list
 * Return: the number of nodes
 */
size_t print_dlistint_backward(const dlistint_t *h)
{
	size_t nodecounter = 0;

	if (h == NULL)
		return (nodecounter);
	nodecounter++;
	while (h->next != NULL)
	{
		nodecounter++;
		h = h->next;
	}
	while (h->prev != NULL)
	{
		printf("%d\n", h->n);
		h = h->prev;
	}
	printf("%d\n", h->n);
	return (nodecounter);
}
