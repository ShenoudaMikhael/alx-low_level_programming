#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_dlistint - free list
 * @head: list
 * Return: void
*/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	{
		return;
	}

	free_dlistint(head->next);


	free(head);
}
