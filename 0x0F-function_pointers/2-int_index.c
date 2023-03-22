#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - returns the index of the first element
 * for which the cmp function does not return 0
 * @size: number of elements in the array
 * @cmp: function to a pointer that compares values
 *
 * Return: 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;
	bool y;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		if (size <= 0)
			return (-1);
		for (index = 0; index < size; index++)
		{
			y = cmp(array[index]);
			if (y == TRUE)
				return (index);
		}
	}
	return (-1);
}
