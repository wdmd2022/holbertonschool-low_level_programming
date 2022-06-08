#include "main.h"

/**
 * _strstr - search a string for a substring
 * @haystack: a string
 * @needle: the substring
 * Return: a pointer to the first occurence of needle
 */
char *_strstr(char *haystack, char *needle)
{
	char *hayy;
	char *needy;

	needy = needle;

	if (*needy == '\0')
	{
		return (haystack);
	}
	for (; *haystack != '\0'; haystack++)
	{
		if (*haystack != *needy)
		{
			continue;
		}
		hayy = haystack;
		while (1 < 2)
		{
			if (*needy == '\0')
			{
				return (haystack);
			}
			if (*hayy++ != *needy++)
			{
				break;
			}
		}
		needy = needle;
	}
	return (0);
}
