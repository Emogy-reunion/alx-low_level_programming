#include <stdio.h>
/**
 * main - program that prints 0 to 9
 * Return: 0 (SUCCESS)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	putchar('\n');
	return (0);
}
