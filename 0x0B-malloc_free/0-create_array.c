#include "main.h"
#include <stdlib.h>

/**
 * create_array -creates an array of characters,
 * and inittializes it with a specific character
 * @size: size of the array
 * @c: character to be assigned
 *
 * Return: NULL if size = 0, pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	int i;

	if (size == 0)
		return (NULL);
	arr = (char *)malloc(sizeof(char) * size);
	if (arr == NULL)
		return (0);
	for (i = 0, i < size; i++)
	{
		arr[i] = 'c';
	}
	return (arr);
}
