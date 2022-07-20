#include "main.h"
#define BUFF_SIZE 1024

/**
 * main - initializes the program that copies from one file to another
 *
 * @argc: count of arguments
 * @argv: array of arguments
 *
 * Return: 1 if success, 0 otherwise
 */
int main(int argc, char *argv[])
{
	int wherefrom, whereto, xfer, countdown = 1024;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	wherefrom = open(argv[1], O_RDONLY);
	if (wherefrom == 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s,\n", argv[1]);
		exit(98);
	}
	whereto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (whereto == 1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while (countdown == 1024)
	{
		countdown = read(wherefrom, buffer, 1024);
		if (countdown == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		xfer = write(whereto, buffer, countdown);
		if (xfer == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	if (close(whereto) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", whereto);
		exit(100);
	}
	if (close(wherefrom) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", wherefrom);
		exit(100);
	}
	return (0);
}
