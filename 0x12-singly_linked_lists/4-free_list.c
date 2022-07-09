#include "lists.h"

/**
 * free_list - frees a list_t list
 *
 * @head: pointer to the head of the list
 *
 * Return: nothing at all
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
