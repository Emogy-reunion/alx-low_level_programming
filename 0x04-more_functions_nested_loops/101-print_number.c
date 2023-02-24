#include "main.h"

/**
 *  print_number - prints an integer
 *  @n: integer to be printed
 */

void print_number(int n)
{
	unsigned int i;
	int j, k;

	k = 10;

	if (n < 10 && n >= 0)
	{
		_putchar (n + '0');
	}
	else if (n > -10 && n < 0)
	{
		n = n - 2 * n;
		_putchar('-');
		_putchar (n + '0');
	}
	else
	{
		if (n < 0)
		{
			n = n * -1;
			_putchar('-');
		}
		i = n;
	while (i / k > 9)
	{
		k = k * 10;
	}
	while (k > 0)
	{
		j = i / k;
		i = i % k;
		_putchar (j + '0');
		k = k / 10;
	}
	}
}
