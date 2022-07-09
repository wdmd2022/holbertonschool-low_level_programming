#include "lists.h"

/**
 * add_node - add a new node at the beginning of a list_t list
 *
 * @head: double pointer to the head of the list
 * @str: string, value for the new node
 *
 * Return: the address of the new element, or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *headswap;
	unsigned int stringlength = 0;

	headswap = malloc(sizeof(list_t));
	if (!headswap)
	{
		return (NULL);
	}
	headswap->str = strdup(str);
	while (str[stringlength])
	{
		stringlength++;
	}
	headswap->len = stringlength;
	headswap->next = *head;
	*head = headswap;
	return (headswap);
}
