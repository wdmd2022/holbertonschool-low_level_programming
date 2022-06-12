#include "holberton.h"

/**
 * _islower - tell is a characer is lowercase or not
 *
 * @c: character provided by user
 *
 * Return: 1 if lower, otherwise 0
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	else
		return (0);
}
