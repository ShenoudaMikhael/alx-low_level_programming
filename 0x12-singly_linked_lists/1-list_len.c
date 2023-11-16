#include "lists.h"
#include <stdlib.h>

#include <stdio.h>
/**
 * print_list - print linked list
 * @h: linked list
 * Return: lenth of list
 */
size_t list_len(const list_t *h)
{
	unsigned int len;
	const list_t *q = h;

	len = 0;
	while (q != NULL)
	{
		len++;

		q = q->next;
	}

	return (len);
}
