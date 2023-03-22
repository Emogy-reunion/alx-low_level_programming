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
	int i;

	if (arry == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
