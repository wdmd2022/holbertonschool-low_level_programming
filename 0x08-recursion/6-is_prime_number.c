#include "main.h"

/**
 * number_chumber - checks to see if an int is prime
 * @nummie: int we are decrementing to check
 * @tummie: number to be checked
 *
 * Return: 1 if prime, otherwise 0
 */
number_chumber(int nummie, int tummie)
{
	if (nummie == 1)
	{
		return (1);
	}
	if (tummie % nummie == 0)
	{
		return (0);
	}
	return (number_chumber(nummie - 1, tummie));
}

/**
 * is_prime_number - returns 1 if the input int is a prime number
 * @n: an integer to check
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (number_chumber(n / 2, n));
}
