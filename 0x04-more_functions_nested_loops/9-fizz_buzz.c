#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100 followed by
 * a new line but for multiples of three prints Fizz
 * instead of the number and for the multiples of five
 * prints Buzz
 * Return: Always 0 (Success)
 */

int main(void)
{
	int j;

	for (j = 1; j <= 100; j++)
	{
		if (j % 3 == 0 || j % 5 == 0)
		{
			if (j % 3 == 0)
			{
				printf("Fizz");
			}
			if (j % 5 == 0)
			{
				printf("Buzz");
			}
		}
		else
		{
			printf("%d", j);
		}
		if (j != 100)
		{
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
