#include "main.h"

/**
 * get_endianness - checks for endiadness
 * Return: 0 for big endian or 1 for little endian;
 */
int get_endianness(void)
{
	unsigned int m;
	char *d;

	m = 1;
	d = (char *) &m;
	if (*d == 1)
		return (1);
	else
		return (0);
}


