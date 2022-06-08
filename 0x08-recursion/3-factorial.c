#include "main.h"

/**
 * factorial - return the factorial of a given number
 * @n: integer to return factorial of
 *
 * Return: integer that is factorial, unless error, then return -1
 */
int factorial(int n)
{
	int f;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		f = 1;
	}
	if (n > 0)
	{
		f = n * factorial(n - 1);
	}
	return (f);
}
