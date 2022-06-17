#include "main.h"
#include <stdlib.h>

/**
 * _strdup - takes a string and copies it into a newly allocated
 * part of memory, returning a pointer to the new string
 *
 * @str: the given string
 *
 * Return: NULL if sting is NULL, or not enough space; otherwise, a pointer
 * to the new string
 */
char *_strdup(char *str)
{
	char *new;
	unsigned int sizey;
	unsigned int spot;

	if (str == NULL)
	{
		return (NULL);
	}
	sizey = 0;
	while (str)
	{
		str++;
		sizey++;
	}
	new = malloc(sizey * sizeof(char));
	if (new == NULL)
	{
		return (NULL);
	}
	for (spot = 0; spot < sizey; spot++)
	{
		new[spot] = str[spot];
	}
	return (new);
}
