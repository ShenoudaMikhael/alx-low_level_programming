#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_nodeint - print list
 * @head: pointer to list
 * @n: int number
 * Return: Nothing
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *q;

	q = malloc(sizeof(listint_t));
	q->next = malloc(sizeof(listint_t));

	if (q == NULL || n == NULL)
		return (NULL);
	q->next = *head;

	q->n = n;
	*head = q;
	return (*head);
}
