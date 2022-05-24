#include "main.h"

/**
 * _isalpha - tell is a characer is a lower/upper case letter  or not
 *
 * @c: character provided by user
 *
 * Return: 1 if a letter, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	else if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}
