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
	for (n = 97; n <= 102; n++)
		putchar(n);
		if (n < 102)
			putchar(44);
			putchar(32);
	return (0);
}
