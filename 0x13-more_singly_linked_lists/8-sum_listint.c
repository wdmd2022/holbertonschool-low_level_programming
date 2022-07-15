#include "lists.h"

/**
 * sum_listint - sums the data 'n' of a listint_t linked list
 * @head: pointer, head of the list
 * Return: sum, unless list is empty, in which case return 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int additup = 0;

	while (head != NULL)
	{
		additup = additup + head->n;
		head = head->next;
	}
	return (additup);
}
