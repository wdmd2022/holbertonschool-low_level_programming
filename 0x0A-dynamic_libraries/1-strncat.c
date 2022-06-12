#include "holberton.h"

/**
 * _strncat - concatenates two strings, using at most n bytes from src
 * and bearing in mind that src does not have to be null-terminated if
 * it contains n or more bytes.
 *
 * @src: the string to be appended to the dest string
 * @dest: the other string
 * @n: the integer representing how many bytes at most to take from src
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int srclength = 0;
	int destlength = 0;

	while (dest[destlength] != '\0')
	{
		destlength++;
	}
	for (srclength = 0; srclength < n && src[srclength] != '\0'; srclength++)
	{
		dest[destlength + srclength] = src[srclength];
	}
	return (dest);
}
