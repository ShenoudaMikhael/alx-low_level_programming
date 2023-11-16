#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - print list lenght
 * @h: linked list
 * Return: lenth of list
 */
list_t *add_node_end(list_t **head, const char *str)
{
    unsigned int len;
    list_t *new;
    new = malloc(sizeof(list_t));
    new->str = strdup(str);
    len = 0;
    while (*str != '\0')
    {
        len++;
        str++;
    }
    new->len = len;
    new->next = head;
    
    return (new);
}
