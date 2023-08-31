#include "main.h"

/**
 * get_bit - returns value of a bit at a given index
 * @n: no to extract bit
 * @index: index of the bit you want to get
 *
 * Return: bit at the value or -1 if error occurredd
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	value = (n >> index) & 1;
	if (index > 63)
		return (-1);
	return (value);
}
