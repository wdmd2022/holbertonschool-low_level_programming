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
	dlistint_t *tempeh = *head;

	if (*head == NULL)
		return (-1);

	while (index != 0)
	{
		if (tempeh == NULL)
			return (-1);
		tempeh = tempeh->next;
		index--;
	}

	if (tempeh == *head)
	{
		*head = tempeh->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
	}
	else
	{
		tempeh->prev->next = tempeh->next;
		if (tempeh->next != NULL)
			tempeh->next->prev = tempeh->prev;
	}
	free(tempeh);
	return (1);
}
