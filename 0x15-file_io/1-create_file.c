#include "main.h"

/**
 * create_file - makes a file
 *
 * @filename: name of the file to create (if NULL return -1)
 * @text_content: a NULL terminated string to write to the file (if NULL,
 * create an empty file)
 *
 * Return: 1 on success. -1 on failure (file can't be created; can't be
 * written; 'write' fails etc etc
 */
int create_file(const char *filename, char *text_content)
{
	int describo, checko;
	int loopster = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	describo = open(filename, O_CREAT | O_WRONLY, 0600 | O_TRUNC);
	if (describo == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (; text_content[loopster]; loopster++)
			;
		checko = write(describo, text_content, loopster);
		if (checko == -1)
			return (-1);
	}
	close(describo);
	return (1);
}
