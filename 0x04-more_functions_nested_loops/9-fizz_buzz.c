#include "main.h"
#include <stdio.h>

/**
 * main - entry point for fizz buzz, which prints numbers 1-100; Fizz for
 * multiples of 3, Buzz for multiples of 5, FizzBuzz for both
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (n % 5 == 0 && n != 100)
		{
			printf("Buzz ");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz\n");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", n);
		}
	}
	return (0);
}
