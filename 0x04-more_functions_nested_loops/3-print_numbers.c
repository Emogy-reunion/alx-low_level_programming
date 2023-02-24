#include "main.h"

/**
 * print_numbers -  checks for checks for a digit (0 through 9).
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int k;

	for (k = 48; k < 58; k++)
	{
		_putchar(k);
	}
	_putchar('\n');
}
