#include "main.h"

/**
 * flip_bits - returns number of bits you
 * would need to flip to get from one number to anotherr
 * @n: number to flip bits
 * @m: number
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int z;
	int not_zero;
	unsigned long int newest;
	unsigned long int xor;

	not_zero = 0;
	xor = n ^ m;
	z = 63;
	while (z >= 0)
	{
		newest = xor >> z;
		if (newest & 1)
			not_zero++;
		z--;
	}
	return (not_zero);
}
