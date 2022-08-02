#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index of a dlistint_t list
 * @head: double pointer to the first element of the list
 * @index: unsigned int, index of which one you want to delete - bearing
 * in mind that the index starts at 0
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tempeh = NULL;
	unsigned int county;

	if (head == NULL)
		return (-1);

	tempeh = *head;

	for (county = 0; county <= index; county++, tempeh = tempeh->next)
	{
		if (tempeh == NULL)
			return (-1);
	}

	if (tempeh == *head)
	{
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
	}
	else
	{
		if (tempeh->next != NULL)
		{
			(tempeh->next)->prev = tempeh->prev;
		}
		(tempeh->prev)->next = tempeh->next;
	}
	free(tempeh);
	return (1);
}
