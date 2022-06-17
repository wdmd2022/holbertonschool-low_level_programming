#include "main.h"
#include <stdlib.h>

/**
 * str_concat - puts ones string after the other and terminates w/ NULL byte
 *
 * @s1: string
 * @s2: string
 *
 * Return: Return pointer to beginning of new string (or NULL if can't)
 */
char *str_concat(char *s1, char *s2)
{
	char *new;
	unsigned int s1count;
	unsigned int s2count;
	unsigned int totalsize;
	unsigned int newcount;

	if (s1 == NULL)
	{
		s1count = 0;
	}
	else
	{
		for (s1count = 0; s1[s1count]; s1count++)
		{
			;
		}
	}
	if (s2 == NULL)
	{
		s2count = 0;
	}
	else
	{
		for (s2count = 0; s2[s2count]; s2count++)
		{
			;
		}
	}
	totalsize = s1count + s2count + 1;
	new = malloc(totalsize * sizeof(char));
	if (new == NULL)
	{
		return (NULL);
	}
	for (newcount = 0; newcount < s1count; newcount++)
	{
		new[newcount] = s1[newcount];
	}
	for (newcount = 0; newcount < s2count; newcount++)
	{
		new[s1count + s2count] = s2[newcount];
	}
	new[s1count + s2count] = '\0';
	return (new);
}
