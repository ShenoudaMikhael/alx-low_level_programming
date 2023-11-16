#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * free_list - free linked list memory
 * @head: linked list ptr
 * Return: nothing
 */
void free_list(list_t *head)
{
    if (head == NULL)
    {
        return;
    }

    free_list(head->next);

    free(head->str);

    free(head);
}