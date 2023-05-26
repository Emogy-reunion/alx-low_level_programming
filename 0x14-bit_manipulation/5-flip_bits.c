#include "main.h"

/**
 * flip_bits -  function that counts the number of bits to changed
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int z, counter = 0;
	unsigned long int urrent;
	unsigned long int xclusive = n ^ m;

	for (z = 63; z >= 0; z--)
	{
		urrent = xclusive >> i;
		if (urrent & 1)
			counter++;
	}

	return (counter);
}

