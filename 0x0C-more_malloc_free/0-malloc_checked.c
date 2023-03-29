#include "main.h"

/**
 * malloc_checked - a function that allocates memory
 * @b: number of bytes
 *
 * Return: pointer string to the alocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);
	if (str == NULL)
		exit(98);
	return (str);
}
