#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - function that Converts binary number to an unsigned int
 * @b: string to be converted
 *
 * Return: converted number
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);
	for (int i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
	result = 2 * result + (b[i] - '0');
	}
	return (result);
}
