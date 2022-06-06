#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string (separators of words are
 * space, tab, new line, ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'
 *
 * @c: the pointer to the string
 *
 * Return: the string
 */
char *cap_string(char *c)
{
	int i;
	int junkspot;
	char stringofjunk[12];

	stringofjunk[0] = ' ';
	stringofjunk[1] = '\t';
	stringofjunk[2] = '\n';
	stringofjunk[3] = ',';
	stringofjunk[4] = '.';
	stringofjunk[5] = '!';
	stringofjunk[6] = '?';
	stringofjunk[7] = '"';
	stringofjunk[8] = '(';
	stringofjunk[9] = ')';
	stringofjunk[10] = '{';
	stringofjunk[11] = '}';
	stringofjunk[12] = '\0';

	if ((c[0] >= 97) && (c[0] <= 122))
	{
		c[0] = c[0] - 32;
	}

	for (i = 1; c[i] != '\0'; i++)
	{
		if ((c[i] >= 97) && (c[i] <= 122))
		{
			for (junkspot = 0; junkspot <= 11; junkspot++)
			{
				if (stringofjunk[junkspot] == c[i - 1])
				{
					c[i] = c[i] - 32;
				}
			}
		}
	}
	return (c);
}
