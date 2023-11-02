#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: ptr
 * @old_size: old ptr size
 * @new_size: new ptr size
 * Return: ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		free(ptr);
		return (malloc(new_size));
	}
	if (new_size > old_size)
	{
		free(ptr);
		return (malloc(new_size));
	}

	return (ptr);
}
