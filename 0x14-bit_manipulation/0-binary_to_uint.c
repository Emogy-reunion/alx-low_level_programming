#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts binary to an unsigned integer
 * @b: pointer to binary string to be converted
 *
 * Return:converted number or
 * 0  if b is null or there are one or more chars that is not 1 or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int value;

	value = 0;
	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		value = (value << 1) | (*b - '0');
		b++;
	}
	return (value);
}
