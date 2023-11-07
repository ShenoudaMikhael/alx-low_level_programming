#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free memory
 * @d: ptr
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return (NULL);
	free(d->name);
	free(d->owner);
	free(d);
}
