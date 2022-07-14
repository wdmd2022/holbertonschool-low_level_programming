#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0's and 1's
 * Return: the converted number, or 0 if b is NULL or contains non 0/1 chars
 */
unsigned int binary_to_uint(const char *b)
{
	char *copy;
	unsigned int imnumb = 0;
	int i = 0;
	int q, r, s, product;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (0);
		i++;
	}
	copy = malloc(sizeof(char) * (i + 1));
	copy[i] = '\0';
	i--;
	for (q = 0; q <= i; q++)
	{
		copy[q] = b[i - q];
	}
	for (r = 0; r <= i; r++)
	{
		if (copy[r] == '1')
		{
			for (s = r, product = 1; s > 0; s--)
			{
				product *= 2;
			}
			imnumb += product;
		}
	}
	return (imnumb);
}
