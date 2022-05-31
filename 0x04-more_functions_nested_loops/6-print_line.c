#include "main.h"

/**
 * print_line - prints a line composed of n underscore characters
 *
 * @n: integer, number of times underscore should be repeated
 *
 * Return: Always 0
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
			_putchar(95);
			n--;
		}
	}
	_putchar(10);
}
