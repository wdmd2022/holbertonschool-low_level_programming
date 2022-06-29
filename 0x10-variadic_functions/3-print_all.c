#include "variadic_functions.h"
/**
 * c_printer - prints a character
 * @c: character
 * Return: nothing
 */
void c_printer(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * i_printer - prints an integer
 * @i: integer
 * Return: nothing
 */
void i_printer(va_list i)
{
	printf("%i", va_arg(i, int));
}

/**
 * f_printer - prints a float
 * @f: float to print
 * Return: nothing
 */
void f_printer(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * s_printer - prints a string
 * s: string to print
 * Return: nothing
 */
void s_printer(va_list s)
{
	printf("%s", va_arg(s, char *));
}

/**
 * print_all - prints whatever
 *
 * format: list of types of arguments to be passed to function, where
 * c is a char, i is an integer, f is a float, s is a char * (and if
 * the string is NULL, we will print (nil) instead. All other arguments
 * are ignored.
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	printable_t toprint[] = {
		{"c", c_printer},
		{"i", i_printer},
		{"f", f_printer},
		{"s", s_printer},
		{NULL, NULL}
	};
	unsigned int n;
	unsigned int m;
	char *keepemseparated = "";

	va_start(args, format);
	n = 0;
	while (format && format[n])
	{
		m = 0;
		while (toprint[m].name != NULL)
		{
			if (*(toprint[m].name) == format[n])
			{
				printf("%s", keepemseparated);
				toprint[m].function(args);
				keepemseparated = ", ";
				break;
			}
			m++;
		}
		n++;
	}
	va_end(args);
	printf(\n);
}
