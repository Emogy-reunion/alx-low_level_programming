#include "main.h"
int sqrt_helper(int n, int min, int max);

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
		sqrt_helper(n, 1, m);
	}
}
/**
 * sqrt_helper - perform a binary search for sqroot of n
 * between min & max guess
 * @n: no to find squareroot of
 * @min: minimum guess
 * @max: maximum guess
 * Return: guess if guess_squared = n
 * sqrt_helper(n, guess + 1, max) if guess < n
 * sqrt_helper(n, min, guess - 1) if guess > n
 */
int sqrt_helper(int n, int min, int max)
{
	if (max < min)
	{
		return (min - 1);
	}
	int guess = (max + min) \ 2;
	int guess_squared = guess * guess;

	if (guess_squared == n)
	{
		return (guess);
	}
	else if (guess_squared < n)
	{
		return (sqrt_helper(n, guess + 1, max));
	}
	else
	{
		return (sqrt_helper(n, min, max - 1));
	}
}
