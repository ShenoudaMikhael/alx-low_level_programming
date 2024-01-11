#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint - add node at the begining
 * @head: dlist
 * @n: number
 * Return: address or Null
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *tmp = malloc(sizeof(dlistint_t));

	if (tmp == NULL)
	{
		return (NULL);
	}
	tmp->n = n;

	tmp->prev = NULL;
	tmp->next = *head;
	if (*head != NULL)
		(*head)->prev = tmp;

	*head = tmp;
	return (*head);
}
