#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @src: the string to be appended to the dest string
 * @dest: the other string
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int destlength = 0;
	int srclength = 0;

	while (dest[destlength] != '\0')
	{
		destlength++;
	}

	while (src[srclength] != '\0')
	{
		dest[destlength] = src[srclength];
		srclength++;
		destlength++;
	}

	dest[destlength] = '\0';

	return (dest);
}
