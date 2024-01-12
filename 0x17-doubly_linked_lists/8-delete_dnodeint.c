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

	while (head != NULL)
	{
		if (*i == index)
		{

			return (head);
		}

		head = head->next;
		*i = *i + 1;
	}
	return (NULL);
}
/**
 * delete_dnodeint_at_index - delete at index
 * @head: list
 * @index: index
 * Return: int
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp = NULL;

	if (head == NULL || *head == NULL)
		return (-1);

	tmp = get_mydnodeint_at_index(*head, index, &i);
	printf("here %d   i: %d   index: %d   ", tmp->n, i, index);
	if (index == 0 && *head)
	{
		printf("start\n");
		if ((*head)->next)
			*head = (*head)->next;
		(*head)->prev = NULL;

		free(tmp);
		return (1);
	}
	if (i == index && tmp->next != NULL && tmp->prev != NULL)
	{
		printf("middle\n");
		tmp->next->prev = tmp->prev;

		tmp->prev->next = tmp->next;
		free(tmp);
		return (1);
	}

	if (tmp->next == NULL)
	{
		printf("end\n");
		tmp->prev = NULL;
		free(tmp);
		return (1);
	}

	return (-1);
}
