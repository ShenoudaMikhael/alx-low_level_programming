#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - struct dog
 * @d: struct
 * @name: char
 * @age: float
 * @owner: char
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
