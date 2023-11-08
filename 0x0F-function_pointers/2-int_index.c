#include <stdlib.h>
/**
 * int_index - return index of element
 * @array: array of int
 * @size: int size of array
 * @cmp: compare function
 * Return: index of first occurance or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{

		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
