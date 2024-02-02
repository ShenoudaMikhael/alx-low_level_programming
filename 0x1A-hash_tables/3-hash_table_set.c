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

	if (key == NULL || strcmp(key, "") == 0 || ht == NULL)
		return (0);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	newKey = strdup(key);
	node->key = newKey;
	node->value = strdup(value);
	node->next = NULL;
	index = key_index((const unsigned char *)newKey, ht->size);

	if (ht->array[index] == NULL)
	{

		ht->array[index] = node;
	}
	else
	{
		head = ht->array[index];

		if (head->next == NULL)
		{
			ht->array[index]->next = node;
			return (0);
		}

		while (head->next != NULL && strcmp(key, head->next->key) != 0)
		{
			head = head->next;
		}
		if (head->next != NULL && strcmp(key, head->key) == 0)
		{

			node->next = head->next->next;
			free(head->next->value);
			free(head->next->key);
			free(head->next);
			head->next = node;
		}
		else
		{
			head->next = node;
		}
	}
	return (1);
}
