#include "search_algos.h"
/**
 * linear_search - a function that searches for a value in an array
 * of integers using the Linear search algorithm
 * @array: array to search
 * @size: array size
 * @value: value to find
 * Return: index of element or -1
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
