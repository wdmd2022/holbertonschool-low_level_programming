#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: double pointer to the first element
 * Return: the dead head's node data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *choppedoff;
	int n;

	if (head == NULL)
		return (0);
	if (*head == NULL)
		return (0);
	choppedoff = *head;
	*head = choppedoff->next;
	n = choppedoff->n;
	free(choppedoff);
	return (n);
}
