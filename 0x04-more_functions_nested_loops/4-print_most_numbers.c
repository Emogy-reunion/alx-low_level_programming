#include "main.h"

/**
 * print_most_numbers - checks for a digit (0 through 9)
 * Retun: 0 (success)
 */
void print_most_numbers(void)
{
	int k;

	for (k = 48; k < 58; k++)
	{
		if (k != 50)
		{
			if (k != 52)
			{
				_putchar(k);
			}
		}
	}
	_putchar('\n');
}
