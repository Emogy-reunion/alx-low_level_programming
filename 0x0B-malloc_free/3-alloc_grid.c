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
	int n, p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	m = malloc(sizeof(int *) * height);

	if (m == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < height; n++)
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
		for (p = 0; p < width; p++)
			m[n][p] = 0;
	}
	return (m);
}
