#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned int index;
    hash_node_t *node;
    char *newKey = NULL;

    if (key == NULL || strcmp(key, "") == 0 || ht == NULL)
        return (0);

    newKey = strdup(key);
    index = key_index((const unsigned char *)newKey, ht->size);

    node = malloc(sizeof(hash_node_t));
    if (node == NULL)
        return (0);

    node->key = newKey;
    node->value = strdup(value);
    node->next = NULL;
    ht->array[index] = node;

    return (1);
}