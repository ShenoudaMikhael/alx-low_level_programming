#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * free_listint - free linked list memory
 * @head: linked list ptr
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
	{
		return;
	}

	free_listint(head->next);

	free(head);
}
