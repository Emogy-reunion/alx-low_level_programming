#include <stdlib.h>
#include "main.h"

/**
 * _calloc - a function that allocates memory for an array
 * @nmemb: number of elements in array
 * @size: size of bytes
 *
 * Return: pointer to the allocated memory
 * if nmemb or size is 0, returns NULL
 * if malloc fails, returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *z;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	z = malloc(nmemb * size);

	if (z == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		z[i] = 0;
	return (z);
}
