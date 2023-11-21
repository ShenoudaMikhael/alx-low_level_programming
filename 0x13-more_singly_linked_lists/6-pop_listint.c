#include "lists.h"
/**
 * pop_listint - deletes the head node of
 * a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: linked list
 * Return: n or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *t;
	int n = 0;

	if (!*head || !head)
		return (0);

	t = *head;
	n = t->n;
	*head = t->next;
	return (n);
}
