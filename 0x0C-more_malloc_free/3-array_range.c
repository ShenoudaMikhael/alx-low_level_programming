#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: min number
 * @max: max number
 * Return: int ptr
 */

int *array_range(int min, int max)
{
	int *t, i;

	if (min > max)
		return (NULL);
	t = malloc(sizeof(int) * (max - min + 1));
	if (t == NULL)
		return (NULL);
	for (i = 0; i <= max; i++)
	{
		t[i] = min + i;
	}
	return (t);
}
