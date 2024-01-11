#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - get node at index
 * @head: list head
 * @index: list index
 * Return: node or null
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (i == index)
			return (head);

		head = head->next;
		i++;
	}
	return (NULL);
}
