#include "main.h"

/**
 * main - starts the function
 *
 * @argc: integer, arguments from the command line #
 * @argv: points to array of strings representing arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int loopy;

	(void)argc;
	for (loopy = 0; argv[0][loopy] != '\0'; loopy++)
	{
		_putchar(argv[0][loopy]);
	}
	_putchar(10);
	return (0);
}

