#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t
 * linked list
 * @index: index of the node that should be deleted (starting at 0)
 * Return: 1 if success, -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int county;
	listint_t *node1, *node2;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		node2 = (*head)->next;
		free(*head);
		*head = node2;
		return (1);
	}
	node1 = *head;
	for (county = 0; county < index - 1; county++)
	{
		if (node1->next == NULL)
			return (-1);
		node1 = node1->next;
	}
	node2 = node1->next;
	node1->next = node2->next;
	free(node2);
	return (1);
}
