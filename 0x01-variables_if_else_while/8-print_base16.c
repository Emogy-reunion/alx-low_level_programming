#include <stdio.h>
/**
 * main - program to print lowercase numbers
 * Return: 0 (SUCCESS)
 */
int main(void)
{
	int num;
	char ch;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
