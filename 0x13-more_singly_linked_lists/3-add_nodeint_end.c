#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - print list
 * @head: pointer to list
 * @n: element to add
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *new, *last;

	last = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	new->next = NULL;

	while (last && last->next != NULL)
	{
		last = last->next;
	}
	if (last)
		last->next = new;
	else
		*head = new;
	return (*head);
}
