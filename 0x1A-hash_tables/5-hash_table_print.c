#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 *
 */
void hash_table_print(const hash_table_t *ht)
{

    unsigned int i;
    int end = 0;
    hash_node_t *a;

    if (ht == NULL || ht->array == NULL)
    {
        return;
    }
    printf("{");

    for (i = 0; i < ht->size; i++)
    {

        if (ht->array[i] != NULL)
        {
            a = ht->array[i];
            while (a != NULL)
            {

                if (end == 1)
                {
                    printf(", ");
                }

                printf("'%s' : '%s'", a->key, a->value);
                end = 1;
                a = a->next;
            }
        }
    }
    printf("}\n");
}