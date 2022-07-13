#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the first element
 * @n: constant integer to add in the element
 * Return: address of the new element, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newend;
	listint_t *tempehtacos;

	newend = malloc(sizeof(listint_t));
	if (!newend)
		return (NULL);
	newend->n = n;
	newend->next = NULL;
	tempehtacos = *head;
	if (*head == NULL)
	{
		*head = newend;
		return (newend);
	}
	while (tempehtacos->next)
	{
		tempehtacos = tempehtacos->next;
	}
	tempehtacos->next = newend;
	return (newend);
}
