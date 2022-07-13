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

	newend = malloc(sizeof(listint_t));
	if (!newend)
		return (NULL);
	newend->n = n;
	newent->next = NULL;
	if (head == NULL)
		return (newend);
	while (head->next)
	{
		head = head->next;
	}
	head->next = newend;
	return (newend);
}
