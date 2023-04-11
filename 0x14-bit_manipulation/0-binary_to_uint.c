#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: input to be converted
 * Return: converted number or
 * 0 if there is one or more chars in the string b that is not 0 or 1,
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int m = 0;

	if (b == NULL)
		return (0);
	for (int i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
			m = m * 2;
		else if (b[i] == '1')
			m = m * 2 + 1;
		else
			return (0);
	}
	return (m);
}
