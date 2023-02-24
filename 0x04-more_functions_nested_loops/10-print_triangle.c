#include "main.h"

/**
 * print_triangle - it draws a triangle followed by a new line
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int e, r;

	if (size > 0)
	{
		for (e = 1; e <= size; e++)
		{
			for (r = 1; r <= size; r++)
			{
				if (r <= size - e)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
