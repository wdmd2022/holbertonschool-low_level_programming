#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - starts the function to add positive numbers
 *
 * @argc: how many arguments are given to the program
 * @argv: pointer to array of strings representing the arguments
 *
 * Return: 0 unless error, then 1
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int loop1;
	int loop2;

	for (loop1 = 1; loop1 < argc; loop1++)
	{
		for (loop2 = 0; argv[loop1][loop2]; loop2++)
		{
			if (argv[loop1][loop2] < '0' || argv[loop1][loop2] >'9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[loop1]);
	}
	printf("%d\n", sum);
	return (0);
}
