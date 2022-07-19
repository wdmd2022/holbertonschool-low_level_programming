#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file. Doesn't create
 * a file if one does not exist.
 *
 * @filename: name of the file to create (if NULL return -1)
 * @text_content: a NULL terminated string to write to the file (if NULL,
 * do not add anything to the file)
 *
 * Return: 1 on success. -1 on failure (file doesn't exist, filename is NULL,
 * don't have permissions to write to the file, etc)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int descript, i;
	ssize_t author;

	if (filename == NULL)
	{
		return (-1);
	}
	descript = open(filename, O_WRONLY | O_APPEND);
	if (descript == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++)
		{
			;
		}
		author = write(descript, text_content, i);
	}
	close(descript);
	if (author == -1)
		return (-1);
	return (1);
}
