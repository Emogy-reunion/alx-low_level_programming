#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: variable to be swapped.
 * @b: variable to be swapped
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
