#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets head to NULL
 * @head: double pointer to the first element
 * Return: nothing at all
 */
void free_listint2(listint_t **head)
{
	listint_t *listkiller;

	if (head == NULL)
		return;
	while (head)
	{
		listkiller = (*head)->next;
		free(*head);
		*head = listkiller;
	}
}
