#include "main.h"

/**
 * reverse_array - a function that reverses an array of integers
 * @a: a is the array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int h = 0, Aux;

	n = n - 1;
	while (h <= n)
	{
		Aux = a[h];
		a[h++] = a[n];
		a[n--] = Aux;
	}
}

