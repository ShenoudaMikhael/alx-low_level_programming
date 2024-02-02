#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *ht = malloc(sizeof(*ht));
    unsigned int i = 0;

    if (!ht)
        return NULL;
    ht->size = size;
    ht->array = malloc(sizeof(hash_node_t) * size);

    for (i = 0; i < size; i++)
    {
        ht->array[i] = NULL;
    }
    return ht;
}