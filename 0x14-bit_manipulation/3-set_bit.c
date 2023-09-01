#include "main.h"

/**
 * set_bit - set the value of a bit to 1 at a given index
 * @n: pointer to value
 * @index: bit to set
 * Return: 1 iff it woorked or -1 iff it didn't
 */
int set_bit(unsigned long int *n, unsigned int index);
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
