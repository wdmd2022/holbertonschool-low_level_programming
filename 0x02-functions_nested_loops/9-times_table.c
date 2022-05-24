#include "main.h"

/**
 * times_table - prints the 9 times
 *
 * Return: Always 0
 */

void times_table(void)
{
	int row, column, product;

	for (column = 0; column <= 9; column++)
	{
		_putchar('0');

		for (row = 1; row <= 9; row++)
		{
			_putchar(',');
			_putchar(' ');

			product = column * row;

			if (product <= 9)
				_putchar(' ');
			else
				_putchar((product / 10) + '0');

			_putchar((product % 10) + '0');
		}
		_putchar(10);
	}
}
