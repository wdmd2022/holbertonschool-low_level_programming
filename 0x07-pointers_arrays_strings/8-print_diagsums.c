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
	int t;
	int val1;
	int val2;
	int firstsum = 0;
	int secondsum = 0;

	x = size - 1;

	for (n = 0; n <= size; n++)
	{
		val1 = *(a + (n * x));
		secondsum = secondsum + val1;
	}

	t = size + 1;
	for (y = 0; y < size; y++)
	{
		val2 = *(a + (y * t));
		firstsum = firstsum + val2;
	}
	printf("%i, %i\n", firstsum, secondsum);
}
