#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - sum list
 * @head: list head
 * Return: int
 */
int sum_dlistint(dlistint_t *head)
{
	int i = 0;

	if (head == NULL)
		return (i);
	while (head != NULL)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
