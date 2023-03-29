#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints new name
 * @argc: number of arguments
 * @argv: array of elements
 *
 * Return: 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
