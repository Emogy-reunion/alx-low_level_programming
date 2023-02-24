#include "main.h"

/**
 * print_square - prints a square followed by a new line
 * @size: size of the square
 */

void print_square(int size)
{
	int s, d;

	if (size > 0)
	{
		for (s = 1; s <= size; s++)
		{
			for (d = 1; d <= size; d++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
