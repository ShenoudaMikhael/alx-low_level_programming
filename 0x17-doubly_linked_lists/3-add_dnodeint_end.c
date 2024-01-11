#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - add node at end
 * @head: list address
 * @n: int
 * Return: null or link adress
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp = malloc(sizeof(dlistint_t));
	dlistint_t *tail = *head;

	if (tmp == NULL)
		return (NULL);

	tmp->n = n;

	if (*head == NULL)
	{
		*head = tmp;
		return (*head);
	}
	while (tail != NULL)
	{
		if (tail != NULL && (tail)->next == NULL)
		{

			tmp->next = NULL;
			if (tail != NULL)
			{
				tmp->prev = tail;

				(tail)->next = tmp;
			}
			break;
		}
		tail = (tail)->next;
	}

	return (*head);
}
