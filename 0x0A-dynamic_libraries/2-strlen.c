#include "holberton.h"

/**
 * _strlen - returns the length of a string pointed to by *s
 *
 * @s: string being pointed to
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int lengthvariable;

	for (lengthvariable = 0; *s != '\0'; s++)
	{
		lengthvariable++;
	}
	return (lengthvariable);
}
