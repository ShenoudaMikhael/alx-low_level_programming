#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_get - get value from hash table
 * @ht: hash table
 * @key: key to goet value
 * Return: value of char*
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int i;

	if (ht == NULL || key == NULL)
		return (0);

	i = key_index(key, ht->size);

	if (ht->array[i]->key == NULL || strcmp(ht->array[i]->key, key) != 0)
	{
		return (NULL);
	}
	return (ht->array[i]->value);
}
