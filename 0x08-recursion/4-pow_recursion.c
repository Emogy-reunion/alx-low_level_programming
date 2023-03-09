#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to power of y
 * @x: input
 * @y: input
 *
 * Return: -1 if y < 0
 * 1 if y == 0
 * x * _pow_recursion(x, y-1)
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
