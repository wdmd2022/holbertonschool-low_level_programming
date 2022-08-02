#include "lists.h"

/**
 * add_dnoteint - adds a new node at the beginning of a dlistint_t list
 * @head: double pointer to beginning of the list
 * @n: constant integer, what we want to add at the node
 * Return: address of the new element, or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *heyimnew;

	heyimnew = malloc(sizeof(dlistint_t));
	if (heyimnew == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = heyimnew;
		heyimnew->next = NULL;
		heyimnew->n = n;
		heyimnew->prev = NULL;
		return (heyimnew);
	}
	heyimnew->n = n;
	heyimnew->next = *head;
	heyimnew->prev = NULL;
	(*head)->prev = heyimnew;
	*head = heyimnew;
	return (heyimnew);
}
