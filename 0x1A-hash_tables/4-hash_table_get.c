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
	unsigned long i;
	hash_node_t *head;

	if (ht == NULL || key == NULL)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);

	head = ht->array[i];
	while (head)
	{
		if (strcmp(head->key, key) == 0)
		{
			return (head->value);
		}

		head = head->next;
	}

	return (NULL);
}
