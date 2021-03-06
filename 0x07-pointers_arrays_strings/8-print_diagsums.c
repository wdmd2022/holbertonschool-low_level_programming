#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * of integers
 * @a: pointer to beginning of the matrix
 * @size: integer
 * Return: Always 0
 */
void print_diagsums(int *a, int size)
{
	int n;
	int x;
	int y;
	int firstsum = 0;
	int secondsum = 0;

	for (n = 0; n < size; n++)
	{
		x = (n * size) + n;
		firstsum = firstsum + *(a + x);
	}
	for (y = 0; y < size; y++)
	{
		x = (y * size) + (size - 1 - y);
		secondsum = secondsum + *(a + x);
	}
	printf("%i, %i\n", firstsum, secondsum);
}
