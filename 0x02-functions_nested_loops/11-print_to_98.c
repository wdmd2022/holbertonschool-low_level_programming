#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98 with style
 * @n: - integer supplied in argument
 * Return: Always 0
 */

void print_to_98(int n)
{
	if (n == 98)
		printf("98\n");
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("98\n");
	}
	else
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("98\n");
	}
}
