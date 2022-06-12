#include "holberton.h"

/**
 * _memcpy - copies a memory area
 *
 * @src: memory area we copy from
 * @dest: where we copy to
 * @n: how many bytes of the memory area to copy
 *
 * Return: a pointer to the memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
