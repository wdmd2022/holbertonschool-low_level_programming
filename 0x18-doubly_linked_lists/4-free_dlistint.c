#include "main.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the first element of the list
 * Return: nothing at all!
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *killer;

	while (head != NULL)
	{
		killer = head->next;
		free(head);
		head = killer;
	}
}
