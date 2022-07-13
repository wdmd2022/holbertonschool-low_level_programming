#include "lists.h"

/**
 * add_noteint - adds a new node at the beginning of a listint_t list
 * @head: pointer to the first element
 * @n: constant integer to add in the element
 * Return: address of the new element, or NULL if it fails
 */
listint_t *add_noteint(listint_t **head, const int n)
{
	listint_t *newhead;

	newhead = malloc(sizeof(listint_t));
	if (!newhead)
		return (NULL);
	newhead-> = n;
	newhead->next = *head;
	*head = newhead;
	return (newhead);
}
