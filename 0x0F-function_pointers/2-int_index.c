#include "function_pointers.h"
/**
 * int_index - returns the index of the first element
 * @array: pointer to array
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int m;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (m = 0; m < size; m++)
	{
		if (cmp(array[m]))
			return (m);
	}
	return (-1);
}
