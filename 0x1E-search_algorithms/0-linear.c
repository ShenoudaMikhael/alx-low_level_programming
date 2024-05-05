#include <stdio.h>
/**
 * binary_search - a function that searches for a
 * value in a sorted array of integers using
 * the Binary search algorithm
 * @array: array to search
 * @size: array size
 * @value: value to find
 *
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%i]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}