#include "main.h"

/**
 * _strncpy - a functions that copies a string
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: Always (0)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int m;

	m = 0;
	while (m < n && src[m] != '\0')
	{
		dest[m] = src[m];
		m++;
	}
	while (m > n)
	{
		dest[m] = '\0';
		m++;
	}
	return (dest);
}
