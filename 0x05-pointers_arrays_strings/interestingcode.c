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
	int length;

	while (*s)
	{
		length++;
		s++;
	}

	length--;

	for (*s[length]; *s; *s--)
	{
		_putchar(s);
	}
	_putchar(10);
}
