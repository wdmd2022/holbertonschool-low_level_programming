#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 *
 * @size: integer, size of triangle base and height
 *
 * Return: Always 0
 */
void print_triangle(int size)
{
	int height;
	int spaces;
	int hashtags;

	if (size > 0)
	{
		for (height = 1; height <= size; height++)
		{
			spaces = (size - height);

			while (spaces > 0)
			{
				_putchar(32);
				spaces--;
			}

			hashtags = height;

			while (hashtags > 0)
			{
				_putchar(35);
				hashtags--;
			}
			_putchar(10);
		}
	}
	else
		_putchar(10);
}
