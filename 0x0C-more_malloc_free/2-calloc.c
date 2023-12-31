#include <stdlib.h>
/**
 * _calloc -  allocates memory for an array, using malloc.
 * @nmemb: number of elements
 * @size: size of element
 * Return: ptr or null
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *t;

	if (size == 0 || nmemb == 0)
		return (NULL);
	t = malloc(nmemb * size);
	if (t == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
	{
		t[i] = 0;
	}

	return (t);
}
