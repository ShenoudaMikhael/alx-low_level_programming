#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_set - insert node in hash table
 * @ht: hash table
 * @key: key to insert
 * @value: new value
 * Return: int 0 or 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index;
	hash_node_t *node, *head;
	char *newKey = NULL;

	if (key == NULL || strcmp(key, "") == 0 ||
		value == NULL || ht == NULL || ht->array == NULL)
		return (0);

	newKey = strdup(key);
	if (newKey == NULL)
		return (0);
	index = key_index((const unsigned char *)newKey, ht->size);
	free(newKey);
	head = ht->array[index];
	while (head != NULL)
	{
		if (strcmp(key, head->key) == 0)
		{
			free(head->value), head->value = strdup(value);
			if (head->value == NULL)
				return (0);
			return (1);
		}
		head = head->next;
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
