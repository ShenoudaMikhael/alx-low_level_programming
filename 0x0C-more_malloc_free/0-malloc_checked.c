#include <stdlib.h>
/**
 * malloc_checked - allocates memory using mallo
 * @b: size to allocate
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	int *t = malloc(b);

	if (t == NULL)
	{
		exit(98);
	}
	return (t);
}
