#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: int
 * @y: int
 * Return: the value if successful; if y < 0, returns -1
 */
int _pow_recursion(int x, int y)
{
	int value;

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		value = 1;
	}
	if (y > 0)
	{
		value = x * _pow_recursion(x, y - 1);
	}
	return (value);
}
