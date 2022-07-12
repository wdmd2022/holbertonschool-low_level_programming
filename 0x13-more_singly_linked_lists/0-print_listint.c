#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t int
 * @h: pointer to the first element
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int county = 0;

	while (h != NULL)
	{
		printf("i\n", h->n);
		h = h->next;
		county++;
	}
	return (county);
}
