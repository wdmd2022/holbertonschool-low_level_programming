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
	int d, checko;
	int county = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (d == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (; text_content[county]; county++)
			;
		checko = write(d, text_content, county);
		if (checko == -1)
			return (-1);
	}
	close(d);
	return (1);
}
