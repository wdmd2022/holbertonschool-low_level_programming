#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - starts the function that multiplies two integers
 *
 * @argc: number of arguments
 * @argv: pointer to array of strings
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%i\n", atoi(argv[1])*atoi(argv[2]));
	return (0);
}
