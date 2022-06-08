#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * of integers
 * @a: pointer to an integer
 * @size: integer
 * Return: Always 0
 */
void print_diagsums(int *a, int size)
{
	int n;
	int p = 0;
	int val1;
	int val2;
	int firstsum = 0;
	int secondsum = 0;

	for (n = 0; n < size; n++)
	{
		val1 = a[n][n];
		firstsum = firstsum + val1;
	}
	while (p < size)
	{
		val2 = a[p][(size - 1) - p];
		secondsum = secondsum + val2;
		p++;
	}
	printf("%i, %i\n", firstsum, secondsum);
}
