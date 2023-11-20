#include "lists.h"
#include <stdio.h>
/**
 * rec - print current element
 * and pass to next one
 * @n: linked list next element
 * @v: current index
 * Return: int (index +1)
 */
int rec(const listint_t *n, int v)
{

	printf("%i\n", n->n);

	if (n->next != NULL)
		v = rec(n->next, v);
	return (v + 1);
}
/**
 * print_listint - print list
 * @h: pointer to list
 * Return: Nothing
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;
	int q = 0;

	q = rec(h, i);
	return (q);
}
