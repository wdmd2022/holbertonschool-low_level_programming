#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line, to stdout
 *
 * @s: the string provided
 *
 * Return: Always 0
 */
void print_rev(char *s)
{
	int length = 0;

	while (*s)
	{
		length++;
		s++;
	}
	while (length--)
	{
		s--;
		_putchar(*s);
	}
	_putchar(10);
}
