#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the terminating
 * null byte, to the buffer pointed to by dest
 *
 * @dest: buffer pointed to
 * @src: string pointed to
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int celltocopy = 0;

	while (src[celltocopy])
	{
		dest[celltocopy] = src[celltocopy];
		celltocopy++;
	}
	dest[celltocopy] = '\0';
	return (dest);
}
