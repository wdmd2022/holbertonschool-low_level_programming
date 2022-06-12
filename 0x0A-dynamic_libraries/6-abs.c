#include "holberton.h"

/**
 * _abs - tell is a characer is a lower/upper case letter  or not
 *
 * @n: value of int provided
 *
 * Return: absolute value of int provided
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n = (n * -1);
		return (n);
	}
}
