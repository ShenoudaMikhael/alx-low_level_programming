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
	dlistint_t *tmp = NULL;

	dlistint_t *tail = *h;

	if (h == NULL || *h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (i < idx - 1 && tail)
	{
		tail = tail->next;
		i++;
	}
	if (tail->next == NULL)
		return (add_dnodeint_end(h, n));

	tmp = malloc(sizeof(dlistint_t));
	if (tmp)
	{
		tmp->next = tail->next;
		tmp->prev = tail;
		tail->next->prev = tmp;
		tail->next = tmp;
	}
	return (NULL);
}
