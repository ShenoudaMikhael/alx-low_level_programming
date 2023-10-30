#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: insigned int size of the array
 * @c: char
 * Return: pointer orNUUL on error
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *t;

	if (size == 0)
	{
		return (NULL);
	}
	t = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		t[i] = c;
	}

	return (t);
}
