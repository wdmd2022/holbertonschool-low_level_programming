#include "lists.h"

/**
 * add_node_end - add a new node at the end of a list_t list
 *
 * @head: double pointer to the head of the list
 * @str: string, value for the new node
 *
 * Return: the address of the new element, or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *oldend;
	list_t *newend;
	unsigned int stringlength = 0;

	newend = malloc(sizeof(list_t));
	if (!newend)
	{
		return (NULL);
	}
	newend->str = strdup(str);
	while (str[stringlength])
	{
		stringlength++;
	}
	newend->len = stringlength;
	newend->next = NULL;
	if (*head == NULL)
	{
		*head = newend;
		return (newend);
	}
	oldend = *head;
	while (oldend->next != NULL)
	{
		oldend = oldend->next;
	}
	oldend->next = newend;
	return (newend);
}
