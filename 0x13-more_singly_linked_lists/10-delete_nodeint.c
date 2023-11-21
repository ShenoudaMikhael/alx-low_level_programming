#include "lists.h"

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *next_elem, *hold;
	int i = 0;

	hold = *head;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = hold->next;
		free(hold);
		return (1);
	}
	if (index == 1)
	{
		hold = (*head)->next;
		(*head)->next = hold->next;
		free(hold);
		return (1);
	}
	while (i < index - 1)
	{
		if (hold->next == NULL)
		{
			return (-1);
		}
		hold = hold->next;
		next_elem = hold->next;
		i++;
	}
	hold->next = next_elem->next;
	free(next_elem);

	return (1);
}