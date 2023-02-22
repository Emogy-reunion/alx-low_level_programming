#include <stdio.h>

/**
 * main - finds and prints even terms and a new line
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	unsigned long int m, n, next, sum;

	m = 1;
	n = 2;
	sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (m < 4000000 && (m % 2) == 0)
		{
			sum += m;
		}
		next = m + n;
		m = n;
		n = next;
	}
	printf("%lu\n", sum);
	return (0);
}
