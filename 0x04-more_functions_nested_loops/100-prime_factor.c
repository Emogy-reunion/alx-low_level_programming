#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number
 * 612852475143 followed by a new line
 * Return: 0 (success)
 */

int main(void)
{
	long t, u;

	t = 612852475143;

	for (u = 2; t > u; u++)
	{
		while (t % u == 0)
		{
			t = t / u;
		}
	}
	printf("%lu", u);
	putchar('\n');
	return (0);
}
