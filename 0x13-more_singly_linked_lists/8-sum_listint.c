
#include "lists.h"
/**
 * sum_listint - sum list
 * @head: linked list
 * Return: sum or 0
 */
int sum_listint(listint_t *head)
{
	if (head == NULL)
		return (0);
	if (head->next == NULL)
		return (head->n);
	return (head->n + sum_listint(head->next));
}

