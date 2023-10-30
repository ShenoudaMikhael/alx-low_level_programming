#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of array
 * @height: height of array
 * Return: array of arrays
 */
int **alloc_grid(int width, int height)
{
	int i, z;
	int **t;

	if (width <= 0 || height <= 0)
	{

		return (NULL);
	}
	t = malloc(sizeof(int *) * height);
	if (t == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		t[i] = malloc(sizeof(int) * width);
		if (t[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(t[i]);
			}
			free(t);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (z = 0; z < width; z++)
		{
			t[i][z] = 0;
		}
	}

	return (t);
}
