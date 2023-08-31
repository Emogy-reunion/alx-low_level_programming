#include "main.h"

/**
 * print_binary - prints binary represantion of a number
 * @n: number to print in binary
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	static char binary[33];
	int m;
	int x;

	if (n == 0)
		_putchar('0');

	for (m = 0; m < 33; m++)
	{
		binary[m] = (n & 0x80000000) ? '1' : '0';
		n <<= 1;
	}
	binary[m] = '\0';

	for (x = 0; x < 33; x++)
		_putchar(binary[x]);
	_putchar('\n');
}
