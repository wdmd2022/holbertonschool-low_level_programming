#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node of a dlistint_t list
 * @head: pointer to the first element of the list
 * @index: unsigned int, the index we want to return
 * Return: pointer to the node, or NULL if doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n;

	if (index == 0)
		return (head);
	for (n = 0; n < index; n++, head = head->next)
		if (head->next == NULL)
			return (NULL);
	return (head);
}
