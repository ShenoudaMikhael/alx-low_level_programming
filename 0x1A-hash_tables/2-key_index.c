#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * key_index - function to return the index of a key
 * @key: key in array
 * @size: size of the table
 * Return: index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

	unsigned long int index = hash_djb2(key);

	(void)size;

	return (index);
}
