#include "main.h"

/**
 * _strlen - Returns lenght of string.
 * @s - declaration of *s and parameter for _strlen
 *
 * Return: Length of a string.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
