#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: number of atguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int  main(int argc, char *argv[])
{
	/*Declaring variables*/
	int posi, tot, chan, aux;
	int coins[] = {25, 10, 5, 2, 1}; /*Array int*/

	posi = tot = chan = aux = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	tot = atoi(argv[1]); /*Convert str into int*/

	if (tot <= 0)
	{
		printf("0\n");
		return (0);
	}
	/*Declaring While*/
	while (coins[posi] != '\0')
	{
		if (tot >= coins[posi])
		{
			aux = (tot / coins[posi]);
			chan += aux;
			tot -= coins[posi] * aux;
		}
		posi++;
	}
	printf("%d\n", chan);
	return (0);
}
