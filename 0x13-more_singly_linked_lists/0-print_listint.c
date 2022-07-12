#include "lists.h"

/**
 * print_listint - prints all the elements of a listin_t int
 * @h - pointer to the first element
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t county = 0;

	while (h != NULL)
	{
		printf("i\n", h->n);
		h = h->next;
		county++;
	}
	return (county);
}
