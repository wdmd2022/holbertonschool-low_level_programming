#include "holberton.h"

/**
 * _strpbrk - search a string for any of a set of bytes
 *
 * @s: a string which we look at
 * @accept: the set of bytes (in string form)
 *
 * Return: a pointer to the byte in s that matches one of the bytes
 * in accept, or else NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
	}
	return (0);
}
