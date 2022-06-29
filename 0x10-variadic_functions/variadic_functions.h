#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct printable - a structure to hold input types and their corresponding
 * functions that will print them
 * @name: name of the data type
 * @function: pointer to function that will print them
 */
typedef struct printable
{
	char *name;
	void (*function)(va_list);
} printable_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
