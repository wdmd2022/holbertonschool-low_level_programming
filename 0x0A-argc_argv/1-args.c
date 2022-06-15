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
	(void)argv;
	printf("%i\n", argc - 1);
}
