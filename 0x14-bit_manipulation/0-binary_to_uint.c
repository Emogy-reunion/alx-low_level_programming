#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: string to be converted
 *
 * Return: converted number,
 * 0 if there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int m;

	if (b == NULL)
		return (0);
	for (m = 0; b[m]; m++)
	{
		if (b[m] != '0' || b[m] != '1')
			return (0);
		num = 2 * num + (b[m] - '0');
	}
	return (num);
}
