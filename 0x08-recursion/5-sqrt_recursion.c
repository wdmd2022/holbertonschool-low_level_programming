#include "main.h"

/**
 * who_let_the_roots_out - checks for a square root
 * @rootytooty: the starting point integer
 * @freshfruity: the number we are seeking the square root for
 * Return: int, the natural square root, or -1 if doesn't exist)
 */
int who_let_the_roots_out(int rootytooty, int freshfruity)
{
	if (rootytooty * rootytooty == freshfruity)
	{
		return (rootytooty);
	}
	if (rootytooty * rootytooty > freshfruity)
	{
		return (-1);
	}
	return (who_let_the_roots_out(rootytooty + 1, freshfruity));
}
/**
 * _sqrt_recursion - looks for a square root
 * @n: the number
 * Return: integer, the natural square root of (if it doesn't exist, return -1)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (who_let_the_roots_out(0, n));
}
