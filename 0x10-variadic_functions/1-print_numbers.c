#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 *
 * @separator: string to be printed between numbers
 * @n: the number of integers passed to the function
 *
 * Return: nothing at all
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argpointer;
	unsigned int x;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(argpointer, n);

	if (separator == NULL)
	{
		for (x = 0; x < n; x++)
		{
			printf("%i", va_arg(argpointer, int));
		}
		printf("\n");
		va_end(argpointer);
		return;
	}

	x = 1;
	while (x < n)
	{
		printf("%i%s", va_arg(argpointer, int), separator);
		x++;
	}
	printf("%i\n", va_arg(argpointer, int));
	va_end(argpointer);
}
