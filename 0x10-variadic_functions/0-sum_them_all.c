#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 *
 * @n: constant unsigned int
 *
 * Return: 0 if n == 0, otherwise return the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list argpointer;
	int sum = 0;
	unsigned int counter;

	va_start(argpointer, n);

	if (n == 0)
	{
		return (0);
	}

	for (counter = 0; counter < n; counter++)
	{
		sum = sum + va_arg (argpointer, int);
	}
	
	va_end (argpointer);
	return (sum);
}
