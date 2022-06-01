#include "main.h"

/**
 * swap_int - swaps the value of two integers
 *
 * @a: int
 * @b: int
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int firstaddressofa;

	firstaddressofa = *a;
	*a = *b;
	*b = firstaddressofa;
}
