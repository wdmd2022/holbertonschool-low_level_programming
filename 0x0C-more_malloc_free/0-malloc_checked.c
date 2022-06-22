#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc and returns a pointer
 *
 * @b: unsigned int
 *
 * Return: a pointer to the allocated memory, or terminate with status value
 * of 98 if fails
 */
void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);
	if (n == NULL)
	{
		exit(98);
	}
	return (n);
}
