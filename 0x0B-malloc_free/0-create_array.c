#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars & initializes it with
 * a specific char.
 *
 * @size: unsigned integer
 * @c: a character
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *n;
	unsigned int coolnumber;

	if (size == 0)
	{
		return (NULL);
	}
	n = (char *)malloc(size * sizeof(char));
	if (n == NULL)
	{
		return (NULL);
	}
	for (coolnumber = 0; coolnumber < size; coolnumber++)
	{
		n[coolnumber] = c;
	}
	return (n);
}
