#include "main.h"
int sqrt_helper(int n, int m);

/**
 * _sqrt_recursion - returns the squareroot of a natural number
 * @n: number to calculate square root of
 * Return: -1 if n doesnt have a natural sqrt
 * n if n is 0 or 1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (sqrt_helper(n, 0));
	}
}

/**
 * sqrt_helper - find the natural square root of a number by recursion
 * @n: number to find square root of
 * @m: iterator
 *
 * Return: the square root
 */
int sqrt_helper(int n, int m)
{
	if (m * m > n)
		return (-1);
	else if (m * m == n)
		return (m);
	else
		return (sqrt_helper(n, m + 1));
}
