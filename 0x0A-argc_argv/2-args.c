#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	printf("%s\n", argv[i]);
}
