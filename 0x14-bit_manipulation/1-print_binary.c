#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: number to print in binary
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int m;
	int not_zero = 0;
	unsigned long int newest;

	for (m = 63; m >= 0; m--)
	{
		newest = n >> m;

		if (newest & 1)
		{
			_putchar('1');
			not_zero++;
		}
		else if (not_zero)
			_putchar('0');
	}
	if (!not_zero)
		_putchar('0');
}
