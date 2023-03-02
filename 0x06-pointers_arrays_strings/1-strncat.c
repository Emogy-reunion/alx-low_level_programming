#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * using at most n bytes from src
 * @dest: input value (s1)
 * @n: input value (size of character to contatenate
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int k = 0, a = 0, q = 0;

	while (dest[k] != '\0')
	{
		k++;
	}
	while (src[a] != '\0')
	{
		a++;
	}
	while (q <= a)
	{
		if (n > 0)
		{
			dest[k] = src[q];
			q++;
			k++;
			n--;
		}
		else
		{
			break;
		}
	}
	return (dest);
}
