#include "main.h"

/**
 * puts_half - prints the second half of a string
 *
 * @str: the string provided
 *
 * Return: Always 0
 */
void puts_half(char *str)
{
	int i;
	int length = 0;
	int secondhalf;

	while (str[length] != '\0')
	{
		length++;
	}

	length--;

	secondhalf = (length / 2) + 1;

	for (i = secondhalf; i <= length; i++)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
