#include "lists.h"

/**
 * sum_dlistint - sum all the data of a dlistint_t list
 * @head: pointer to the first element of the list
 * Return: int sum, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	if (head == NULL)
		return (sum);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
