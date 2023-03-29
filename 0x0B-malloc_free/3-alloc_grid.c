#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **m;
	int n, o;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	m = malloc(sizeof(int *) * height);

	if (m == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		m[n] = malloc(sizeof(int) * width);

		if (m[n] == NULL)
		{
			for (; n >= 0; n--)
				free(m[n]);

			free(m);
			return (NULL);
		}
	}
	for (n = 0; n < height; n++)
	{
		for (o = 0; o < width; o++)
			m[n][o] = 0;
	}
	return (m);
}
