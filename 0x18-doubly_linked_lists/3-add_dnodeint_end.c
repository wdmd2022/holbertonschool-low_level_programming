#include "lists.h"

/**
 * add_dnodeint_end - add a new node at the end of a dlistint_t list
 * @head: double pointer to beginning of list
 * @n: const int, for the n
 * Return: address of the new element, or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *surfer, *heyimnew;

	heyimnew = malloc(sizeof(dlistint_t));
	if (heyimnew == NULL)
		return (NULL);
	heyimnew->next = NULL;
	heyimnew->n = n;
	if (*head == NULL)
	{
		heyimnew->prev = NULL;
		*head = heyimnew;
		return (heyimnew);
	}

	surfer = *head;
	while (surfer->next != NULL)
		surfer = surfer->next;
	surfer->next = heyimnew;
	heyimnew->prev = surfer;
	return (heyimnew);
}
