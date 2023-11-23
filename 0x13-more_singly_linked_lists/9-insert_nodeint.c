#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert node at index
 * @head: ptr to linked list
 * @idx: index of new element
 * @n: new element value
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *hold;
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	hold = *head;

	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (*head);
	}

	while (hold != NULL)
	{
		if (count == idx - 1)
		{
			temp->next = hold->next;
			hold->next = temp;
		}
		count++;
		hold = hold->next;
	}
	if (idx > count)
		return (NULL);
	return (temp);
}
