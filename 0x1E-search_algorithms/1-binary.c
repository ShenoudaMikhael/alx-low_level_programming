#include "search_algos.h"
/**
 * print_array - prints n elements of an
 * array of integers
 * @a: array to print
 * @n: hight index
 * @low: start index
 * Return: void
 */
void print_array(int *a, size_t low, size_t n)
{
	size_t i;

	i = low;

	printf("Searching in array: ");
	while (i <= n)
	{
		printf("%d", a[i]);
		i++;
		if (i == n)
		{
			break;
		}
		printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - a function that searches for a value in
 * a sorted array of integers using the Binary search algorithm
 * @array: array to search
 * @size: array size
 * @value: value to find
 * Return: index of element or -1
 */
int binary_search(int *array, size_t size, int value)
{

	size_t l, h, m;

	if (array == NULL)
		return (-1);

	l = 0;
	h = size;
	while (l <= h)
	{

		m = (l + (h)) / 2;

		if (m == h)
			return (-1);
		print_array(array, l, h);
		if (value == array[m])
			return (m);
		if (value > array[m])
			l = m + 1;
		else
			h = m - 1;
	}
	return (-1);
}
