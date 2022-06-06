#include "holberton.h"

/**
 * _strncpy - copies at most n bytes of string src into dest; if src is fewer
 * than n bytes long, fills the rest with null bytes
 *
 * @dest: the string to copy into
 * @src: the string to copy
 * @n: integer
 *
 * Return: pointer to string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i + 1] = '\0';
	return (dest);
}
