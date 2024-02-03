#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * free_list - free linked list memory
 * @head: linked list ptr
 * Return: nothing
 */
void free_list(hash_node_t *head)
{
	if (head == NULL)
	{
		return;
	}

	free_list(head->next);
	head->next = NULL;
	free(head->value);
	free(head->key);

	free(head);
}
/**
 * hash_table_delete - free hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{

	unsigned int i = 0;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		free_list(ht->array[i]);
		ht->array[i] = NULL;
	}
	free(ht->array);
	free(ht);
}
