#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the first element
 * Return: nothing at all
 */
void free_listint(listint_t *head)
{
	listint_t *listkiller;

	while (*head)
	{
		listkiller = head->next;
		free(head);
		head = listkiller;
	}
}
