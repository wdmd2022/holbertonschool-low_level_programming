#include "lists.h"

/**
 * sum_listint - sums the data 'n' of a listint_t linked list
 * @head: pointer, head of the list
 * Return: sum, unless list is empty, in which case return 0
 */
int sum_listint(listint_t *head)
{
	int additup = 0;

	while (head != NULL)
	{
		additup = additup + head->n;
		head = head->next;
	}
	return (additup);
}
