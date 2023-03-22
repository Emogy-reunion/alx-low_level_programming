#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints name using a function pointer
 * @name: name to print
 * @f: function pointer
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
