#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 *
 * @separator: the string to be printed between the strings
 * @n: const unsigned int, the number of strings passed to the function
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argpointer;
	unsigned int intianajones;
	char *comparyberry;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(argpointer, n);
	for (intianajones = 1; intianajones < n; intianajones++)
	{
		comparyberry = va_arg(argpointer, char *);
		if (comparyberry != NULL)
		{
			printf("%s", comparyberry);
		}
		if (comparyberry == NULL)
		{
			printf("(nil)");
		}
		if (separator != NULL)
		{
			printf("%s", separator);
		}
	}
	comparyberry = va_arg(argpointer, char *);
	if (comparyberry != NULL)
	{
		printf("%s\n", comparyberry);
	}
	if (comparyberry == NULL)
	{
		printf("(nil)\n");
	}
}
