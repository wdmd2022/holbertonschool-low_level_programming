#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0's and 1's
 * Return: the converted number, or 0 if b is NULL or contains non 0/1 chars
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int imnumb = 0;
	int i = 0;
	int p, q, r;
	int flippy;

	if (b == NULL)
		return (0);	
	while (b[i])
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (0);
		i++;
	}
	i--;
	p = i;
	for (q = 0; q < p; q++)
	{
		p = i - q;
		flippy = b[q];
		b[q] = b[p];
		b[p] = flippy;
	}
	for (r = 0; r <= i; r++)
	{
		if (b[r] = 1)
			imnumb += 2^r;
	}
	return (imnumb);
}
