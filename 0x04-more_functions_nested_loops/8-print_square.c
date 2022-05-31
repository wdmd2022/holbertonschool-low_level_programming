#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 *
 * @size: integer, size of square
 *
 * Return: Always 0
 */
void print_square(int size)
{
	int width;
	int height;

	if (size > 0)
	{
		for (height = 1; height <= size; height++)
		{
			for (width = 1; width <= size; width++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
	else
		_putchar(10);
}
