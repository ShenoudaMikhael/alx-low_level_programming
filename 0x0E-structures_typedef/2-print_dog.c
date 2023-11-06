#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print struct
 * @d: struct
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\nAge: %f\nName: %s\n",
		   d->name != NULL ? d->name : "(nil)",
		   d->age, d->owner != NULL ? d->owner : "(nil)");
}
