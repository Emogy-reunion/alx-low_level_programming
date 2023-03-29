#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integrs
 * @min: smallest number in the array
 * @max: largest value in array
 *
 * Return: pointer to the address of the memory block
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		ptr[i] = min++;
	return (ptr);
}
