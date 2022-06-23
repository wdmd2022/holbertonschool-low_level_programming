#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 *
 * @name: string, the name to print
 * @f: function that takes a string and returns void
 * 
 * Return: nothing at all
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
