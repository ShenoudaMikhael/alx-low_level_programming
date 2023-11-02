#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: min number
 * @max: max number
 * Return: int ptr
 */

int *array_range(int min, int max)
{
	int *t;
	int i;

	if (min >= max)
		return (NULL);
	t = malloc(sizeof(int) * (max - min + 1));
	if (t == NULL)
		return (NULL);
	i = 0;
	while (min <= max)
	{
		t[i] = min;
		i++;
		min++;
	}
	return (t);
}
