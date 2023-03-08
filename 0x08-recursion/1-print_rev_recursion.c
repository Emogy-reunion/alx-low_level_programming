#include "main.h"

/**
 * _print_rev_recursion -  prints a reverse string
 * @s: string to be reversed
 *
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
