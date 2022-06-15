#include "main.h"
#include <stdio.h>

/**
 * main - starts the function
 *
 * @argc: int, how many arguments
 * @argv: pointer to array of strings representing arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int loopy;

	for(loopy = 0; loopy < argc; loopy++)
		printf("%i\n", loopy);
	return (0);
}
