#include "holberton.h"

/**
 * leet - makes a string look cool
 *
 * @c: the string that isn't cool yet
 *
 * Return: the much cooler string
 */
char *leet(char *c)
{
	char duggyspeak[] = "aAeEoOtTlL4433007711";
	int i;
	int n;

	for (n = 0; c[n] != '\0'; n++)
	{
		for (i = 0; i <= 9; i++)
		{
			if (c[n] == duggyspeak[i])
			{
				c[n] = duggyspeak[i + 10];
			}
		}
	}
	return (c);
}
