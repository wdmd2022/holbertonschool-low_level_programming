#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times on 10 lines
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int n;

	int m;

	for (n = 0; n <= 11; n++)
		while (n <= 10)
		{
			for (m = 97; m <= 122; m++)
				_putchar(m);
		}
	_putchar(10);
}
