#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - insert at index
 * @h: list head
 * @idx: index
 * @n: n value
 * Return: new adress
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *tmp = malloc(sizeof(dlistint_t));
	dlistint_t *tail = *h;

	if (tmp == NULL)
		return (NULL);

	if (*h == NULL)
		return (NULL);

	tmp->n = n;

	while (tail)
	{
		if (idx == 0)
			return (add_dnodeint(h, n));
		else if (i == idx - 1 && tail->next != NULL)
		{
			tmp->next = tail->next;
			tail->next = tmp;
			return (tmp);
		}
		else if (i == idx - 1 && tail->next == NULL)
		{
			add_dnodeint_end(h, n);
		}
		tail = tail->next;
		i++;
	}
	return (NULL);
}