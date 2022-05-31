#include "main.h"

/**
 * print_diagonal - prints a diagonal line composed of n \ characters
 *
 * @n: integer, number of times slash should be repeated
 *
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int spacesnumber;
	int linenumber;

	if (n > 0)
		for (linenumber = 1; linenumber <= n; linenumber++)
		{
			spacesnumber = (linenumber - 1);
			while (spacesnumber > 0)
			{
				_putchar(32);
				spacesnumber--;
			}
			_putchar(92);
			_putchar(10);
		}
	else
		_putchar(10);
}
