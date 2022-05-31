#include "main.h"

/**
 * print_numbers - prints the numbers 0 through 9, followed by a new line
 *
 * Return: Always 0
 */
void print_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		_putchar(n);
	}
	_putchar(10);
}
