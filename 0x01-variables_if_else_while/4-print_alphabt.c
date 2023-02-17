#include <stdio.h>
/**
 * main - prints alphabet in lowercase
 * Return: 0 (SUCCESS)
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
			putchar(la);
	}
	putchar('\n');
	return (0);
}
