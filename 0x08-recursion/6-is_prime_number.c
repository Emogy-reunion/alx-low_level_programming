#include "main.h"

int prime_helper(int n, int m);

/**
 * is_prime_number - find out if a number is a prime number
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number
 * 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (prime_helper(n, n - 1));
}

/**
 * prime_helper - find out if number is prime recursively
 * @n: number to evaluate
 * @m: iterator
 *
 * Return: 1 if n is prime
 * 0 if not
 */
int prime_helper(int n, int m)
{
	if (m == 1)
		return (1);
	else if (n % m == 0 && m > 0)
		return (0);
	else
		return (prime_helper(n, m - 1));
}

