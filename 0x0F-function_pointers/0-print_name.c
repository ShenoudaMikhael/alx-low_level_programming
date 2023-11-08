#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - print name
 * @name: name to print
 * @f: char function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	(f)(name);
}
