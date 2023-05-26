#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int m, counter = 0;
	unsigned long int urrent;

	for (m = 63; m >= 0; m--)
	{
		urrent = n >> m;

		if (urrent & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}

