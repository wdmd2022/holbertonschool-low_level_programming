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
	n = 48;

	while (n <= 57) {
		if (n < 57)
		putchar(n);
		putchar(44);
		putchar(32);
		n+=1; 
		if (n == 57)
			putchar(n);
	}
	return (0);
}
