#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: pointer to an array of integers
 * @n: the number of elements in the array
 *
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int i;
	int holdy;

	n--;

	for (i = 0; i < (n / 2); i++)
	{
		holdy = a[i];
		a[i] = a[n - i];
		a[n - i] = holdy;
	}
}
