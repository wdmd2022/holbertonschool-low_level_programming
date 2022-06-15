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
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%i\n", (argc - 1));
	return (0);
}
