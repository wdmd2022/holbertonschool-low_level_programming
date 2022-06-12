#include "holberton.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 *
 * @str: the string provided
 *
 * Return: Always 0
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
}
