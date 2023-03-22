#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prints each array on a newline
 * @array: the array
 * @size: no of elements to be printed
 * @action: pointer to function
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
