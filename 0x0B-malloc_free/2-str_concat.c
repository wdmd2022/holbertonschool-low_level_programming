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
	int s1count = 0;
	int s2count = 0;
	int newlength;
	int x;
	int y;

	while (s1[s1count])
	{
		s1count++;
	}
	while (s2[s2count])
	{
		s2count++;
	}
	newlength = s1count + s2count + 1;
	new = (char *)malloc(newlength * sizeof(char));
	for (x = 0; x < s1count; x++)
	{
		new[x] = s1[x];
	}
	for (y = 0; y < s2count; y++)
	{
		new[x] = s2[y];
		x++;
	}
	new[x] = '\0';
	return (new);
}