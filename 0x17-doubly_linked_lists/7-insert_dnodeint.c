#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - get node at index
 * @head: list head
 * @index: list index
 * @i: current index
 * Return: node or null
 */
dlistint_t *get_mydnodeint_at_index(
	dlistint_t *head, unsigned int index, unsigned int *i)
{

	if (head == NULL)
		return (NULL);

	while (head->next != NULL)
	{
		if (*i == index - 1)
		{

			return (head);
		}

		head = head->next;
		*i = *i + 1;
	}
	return (NULL);
}

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

	tail = get_mydnodeint_at_index(*h, idx, &i);

	if (idx > (i + 1))
	{
		return (NULL);
	}

	if (idx == (i + 1) && tail == NULL)
		return (add_dnodeint_end(h, n));
	printf("%d     %d\n", idx, i + 2);

	if (idx < (i + 2))
	{
		tmp = malloc(sizeof(dlistint_t));
		if (tmp)
		{
			tmp->n = n;
			tmp->next = tail->next;
			tmp->prev = tail;
			tail->next->prev = tmp;
			tail->next = tmp;
			return (tmp);
		}
	}
	return (NULL);
}
