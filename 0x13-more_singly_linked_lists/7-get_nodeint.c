#include "lists.h"

/**
 * get_nodeint_at_index - returns a specific  node of a listint_t type
 * linked list.
 * @head: pointer, head of the list
 * @index: unsigned int
 * Return: pointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int county;

	if (head == NULL)
		return (NULL);
	for (county = 0; county < index; county++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
