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
	while (i < n)
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
 * rec_binary_search - a function that searches for a value in
 * a sorted array of integers using the Binary search algorithm
 * @arr: array to search
 * @high: end index
 * @low: start
 * @val: value to find
 * Return: index of element or -1
 */
int rec_binary_search(int *arr, size_t low, size_t high, int val)
{

	size_t mid;

	if (low > high)
		return (-1);
	if (high != low)
		print_array(arr, low, high);

	mid = low + (high - low - 1) / 2;
	if (arr[mid] == val)
		return (mid);
	else if (arr[mid] < val)
		return (rec_binary_search(arr, mid + 1, high, val));
	else
		return (rec_binary_search(arr, low, mid - 1, val));

	return (-1);
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
	if (array == NULL)
		return (-1);
	return (rec_binary_search(array, 0, size, value));
}
