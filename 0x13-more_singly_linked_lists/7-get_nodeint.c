#include "lists.h"
#include <stdio.h>
/**
 * rec3 - recursion over the link
 * and pass to next one
 * @n: linked list next element
 * @v: current index
 * @index: current index
 * Return: linked list or null
 */
listint_t *rec3(listint_t *n, int v, int index)
{

	if (v == index)
		return (n);
	if (n->next != NULL)
		return (rec3(n->next, v + 1, index));
	else
		return (NULL);
	return (NULL);
}
/**
 * get_nodeint_at_index - print list
 * @head: pointer to list
 * @index: index to return
 * Return: Nothing
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i = 0;
	listint_t *q;

	if (head == NULL)
		return (0);

	q = rec3(head, i, index);
	return (q);
}
