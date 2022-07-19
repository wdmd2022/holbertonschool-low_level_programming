#include "main.h"

/**
 * read_textfile - reads a text file, prints it to the POSIX standard output
 *
 * @filename: pointer to the file
 * @letters: how many letters it SHOULD read and print
 *
 * Return: the actual number of letters it could read and print. If file
 * cannot be opened or read, return 0. Return 0 also if filename is NULL.
 * if write fails or does not write the expected amount of bytes, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t howmanyread, how manywritten;
	char *buffdude;
	int checky;

	if (filename == NULL)
	{
		return (0);
	}
	checky = open(filename, 0_RDONLY);
	if (checky == -1)
	{
		return (0);
	}
	buffdude = malloc(letters);
	if (buffdude == NULL)
	{
		return (0);
	}
	howmanyread = read(checky, buffdude, letters);
	howmanywritten = write(STDOUT_FILENO, buffdude, howmanyread);
	free(buffdude);
	close(checky);
	return (howmanywritten);
}
}
