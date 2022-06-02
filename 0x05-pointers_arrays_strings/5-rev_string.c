#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: the string provided
 *
 * Return: Always 0
 */
void rev_string(char *s)
{
	int length = 0;
	int i;
	int p;
	int juggling;

	while (s[length] != '\0')
	{
		length++;
	}

	length--;

	p = length;

	for (i = 0; i < p; i++)
	{
		p = length - i;
		juggling = s[i];
		s[i] = s[p];
		s[p] = juggling;
	}
}
