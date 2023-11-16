#include "lists.h"
#include <stdlib.h>

#include <stdio.h>
/**
 * print_list - print linked list
 * @h: linked list
 * Return: lenth of list
 */
size_t print_list(const list_t *h)
{
	unsigned int len;
	const list_t *q = h;
	char *nil = "(nil)";

	len = 0;
	while (q != NULL)
	{
		len++;

		if (q->str == NULL)
		{

			printf("[%i] %s", q->len, nil);
		}
		else
		{
			printf("[%i] %s", q->len, q->str);
		}

		putchar('\n');
		q = q->next;
	}

	return (len);
}
