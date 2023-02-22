#include <stdio.h>

/**
 * main - prints first 50 fibonnacci numbers, starting with 1 and 2
 *        separated by comma followed by space
 * Return: 0 (success)
 */
int main(void)
{
	int count;
	unsigned long fib1 = 0;
	unsigned long fib2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);
		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
