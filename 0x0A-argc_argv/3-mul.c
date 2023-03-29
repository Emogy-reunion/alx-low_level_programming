#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int m, n, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	m = atoi(argv[1]);
	n = atoi(argv[2]);
	result = m * n;
	printf("%d\n", result);
	return (0);
}

