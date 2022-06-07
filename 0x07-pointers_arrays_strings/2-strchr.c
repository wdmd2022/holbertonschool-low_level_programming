#include "main.h"

/**
 * _strchr - finds a character in a string
 *
 * @s: the string we look at
 * @c: the character we are earnestly searching for
 *
 * Return: a pointer to the first occurence of c, or the null byte
 * if c does not occur in s
 */
char *_strchr(char *s, char c)
{
	while (*s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return ('\0');
}
