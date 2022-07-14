#include "main.h"

/**
 * print_binary - prints the binary representation of a number (without using
 * arrays, malloc, or the operators % and /
 * @n: unsigned long int
 * Return: the converted number, or 0 if b is NULL or contains non 0/1 chars
 */
void print_binary(unsigned long int n)
{
	unsigned long int ncopy;

	ncopy = n;

	if (ncopy > 1)
	{
		print_binary(ncopy >> 1);
	}
	_putchar((ncopy & 1) + 48);
}
