#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers, then a new line
 *
 * @a: the string provided
 * @n: how many elements to print
 *
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int start;

	if (n > 0)
	{
		for (start = 0; start < n; start++)
		{
			if (start != (n - 1))
			{
				printf("%i ,", start);
			}
			else
			{
				printf("%i", start);
			}
		}
	}
	_putchar(10);
}
