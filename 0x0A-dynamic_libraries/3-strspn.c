#include "holberton.h"

/**
 * _strspn - get the length of a prefix substring
 *
 * @s: a string which we look at (which contains only bytes from...)
 * @accept: another string
 *
 * Return: the number of bytes from the initial segment of s which
 * consists only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				break;
			}
			j++;
		}
		if (!accept[j])
		{
			break;
		}
		i++;
	}
	return (i);
}
