#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list2 - free linked list memory
 * @head: linked list ptr
 * Return: nothing
 */
void free_list2(listint_t *head)
{
	if (head->next != NULL)
	{
		free_list2(head->next);
	}
	if (head != NULL)
		free(head);
}
/**
 * free_listint2 - free linked list memory
 * @head: linked list ptr
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	if (head == NULL || *head == NULL)
	{
		return;
	}

	free_list2(*head);
	*head = NULL;
}
