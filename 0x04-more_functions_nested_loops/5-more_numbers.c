#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by new line
 */

void more_numbers(void)
{
	int k, m;

	for (k = 0; k < 10; k++)
	{
		for (m = 0; m < 15; m++)
		{
			if (m / 10 != 0)
			{
				_putchar(m / 10 + '0');
			}
			_putchar(m % 10 + '0');
		}
		_putchar('\n');
	}
}
