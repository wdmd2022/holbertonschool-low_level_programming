#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: the string provided
 *
 * Return: Always 0
 */
void puts2(char *str)
{
	int i;
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	length--;
	for (i = 0; i <= length; i++)
	{
		if (str[i] % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar(10);
}
