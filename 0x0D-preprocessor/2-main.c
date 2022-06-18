#include <stdio.h>

/**
 * main - initializes the function that prints the name of the file it
 * was called from
 *
 * Return: Always 0
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
