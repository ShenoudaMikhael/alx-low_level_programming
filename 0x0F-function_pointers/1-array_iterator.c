#include <stdlib.h>
/**
 * array_iterator - iterate over array
 * @array: array of int
 * @size: size of array
 * @action: print function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || size == 0 || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
