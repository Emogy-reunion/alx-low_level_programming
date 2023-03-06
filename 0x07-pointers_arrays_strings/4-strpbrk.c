#include "main.h"

/**
 *  _strpbrk - gets the length of a prefix substring
 *  @s: input
 *  @accept: input
 *  Return: 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}
