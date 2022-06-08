#include "main.h"

/**
 * print_chessboard - prints a chessboard from a provided array
 * @a: pointer to a square of a digital chessboard
 * Return: Always 0
 */
void print_chessboard(char (*a)[8])
{
	int row;
	int column;

	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
		{
			_putchar(a[row][column]);
		}
		_putchar(10);
	}
}
