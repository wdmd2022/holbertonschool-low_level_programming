#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointer to a memory area
 * @b: the constant byte to fill the memory with
 * @n: how many bytes of the memory area to fill
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
