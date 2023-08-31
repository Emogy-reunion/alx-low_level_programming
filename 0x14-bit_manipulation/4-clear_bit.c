#include "main.h"

/**
 * clear_bit -  sets the value of a bit to 0 at a given index
 * @n: pointer to number to set bit
 * @index: index of bit to set
 *
 * Return: 1 if it worked or 0 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	*n = (~(1UL << index) & *n);
	if (index > 63)
		return (-1);
	return (1);
}
