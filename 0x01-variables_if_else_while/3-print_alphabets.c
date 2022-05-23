#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
	{
	int n;

	for (n = 65; n <= 123; n++)
	if (n <= 90)
		putchar(n);
	else if ((n >= 97) && (n <= 122))
		putchar(n);
	else if (n == 123)
		putchar(10);
	return (0);
}
