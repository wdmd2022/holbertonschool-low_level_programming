#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates 2 strings, the first string along with
 * the first n bytes of string 2, terminating in null
 *
 * @s1: string 1
 * @s2: string 2
 * @n: unsigned int, how many bytes maximum of 2 to copy
 *
 * Return: a pointer to the allocated memory or NULL if function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	unsigned int countone = 0, counttwo = 0;
	unsigned int indexone, indextwo;
	char *junk;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[countone])
	{
		countone++;
	}
	while (s2[counttwo])
	{
		counttwo++;
	}
	if (n > counttwo)
		n = counttwo;
	new = malloc(sizeof(char) * (countone + n + 1));
	if (new == NULL)
		return (NULL);
	for (indexone = 0; s1[indexone] != '\0'; indexone++)
	{
		new[indexone] = s1[indexone];
	}
	for (indextwo = countone; indextwo < countone + n; indextwo++)
	{
		new[indextwo] = s2[indextwo - countone];
	}
	new[indextwo] = '\0';
	junk = malloc(5);
	free(junk);
	return (new);
}
