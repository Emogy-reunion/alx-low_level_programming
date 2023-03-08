#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: string to be printed
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_putchar("%c", *s);

	}
	_puts_recursion(s + 1);
	_putchar('\n');
}


