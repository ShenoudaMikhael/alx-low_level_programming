#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - get linked list length
 * @h: linked list adress
 * Return: len of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		if (h->next == NULL)
			break;
		h = h->next;
	}
	return (i);
}
