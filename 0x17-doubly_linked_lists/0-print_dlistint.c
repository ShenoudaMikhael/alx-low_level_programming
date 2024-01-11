#include <stddef.h>
#include <stdio.h>
#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{

	size_t i = 0;

	while (h != NULL)
	{

		i++;
		printf("%d\n", h->n);

		if (h->next == NULL)
			break;
		h = h->next;
	}
	return (i);
}
