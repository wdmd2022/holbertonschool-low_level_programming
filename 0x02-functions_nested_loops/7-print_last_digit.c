#include "main.h"

/**
 * print_last_digit - print and return the last digit of the int provided
 *
 * @n: value of int provided
 *
 * Return: last digit of int provided
 */
int print_last_digit(int n)
{
	n = (n % 10);
	if (n < 0)
		n = n * -1;
	_putchar(n + 48);
	return (n);
}
