#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string whose life we're going to flip-turn upside-down
 *
 * Return: Always 0
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(++s);
	_putchar(*s);
}
