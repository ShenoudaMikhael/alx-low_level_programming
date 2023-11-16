#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - add node to the end
 * @head: linked list
 * @str: string
 * Return: lenth of list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len;
	list_t *new, *last;

	last = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for (len = 0; *str != '\0'; len++)
	{
		str++;
	}
	new->len = len;
	new->next = NULL;

	while (last && last->next != NULL)
	{
		last = last->next;
	}
	if (last)
		last->next = new;
	else
		*head = new;
	return (*head);
}
