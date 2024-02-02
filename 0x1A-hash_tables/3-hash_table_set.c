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
	unsigned int new_index;
	hash_node_t *node, *notempty_node;
	char *newKey = NULL;

	if (key == NULL || strcmp(key, "") == 0 || ht == NULL)
		return (0);

	node = malloc(sizeof(hash_node_t));

	if (node == NULL)
		return (0);
	node->key = newKey;
	node->value = strdup(value);
	node->next = NULL;

	newKey = strdup(key);
	new_index = key_index((const unsigned char *)newKey, ht->size);
	if (ht->array[new_index] == NULL)
		ht->array[new_index] = node;
	else
	{
		notempty_node = ht->array[new_index];
		if (strcmp(notempty_node->key, key) == 0) /* on top */
		{
			node->next = notempty_node->next;
			ht->array[new_index] = node;
			free(notempty_node->key);
			free(notempty_node->value);
			free(notempty_node);
		}
		while (notempty_node->next != NULL && strcmp(notempty_node->key, key) != 0) /* in the middle */
			notempty_node = notempty_node->next;
		if (strcmp(notempty_node->key, key) == 0)
		{
			node->next = notempty_node->next->next;
			free(notempty_node->next->key);
			free(notempty_node->next->value);
			free(notempty_node->next);
			notempty_node->next = node;
		}
		else
		{
			node->next = ht->array[new_index];
			ht->array[new_index] = node;
		}
	}
	return (1);
}
