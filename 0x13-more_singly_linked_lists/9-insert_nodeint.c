#include "lists.h"
#include <stdlib.h>
/**
 * rec4 - recursion over the link
 * and pass to next one
 * @new_element: linked list next element
 * @current_index: current index
 * @new_element_index: new index
 * @temp: ptr to new node
 * @head: ptr to list
 * Return: new node or null
 */
listint_t *rec4(
	listint_t *head,
	int new_element,
	int current_index, int new_element_index, listint_t *temp)
{

	if (current_index == new_element_index - 1)
	{
		temp->n = new_element;
		temp->next = head->next;
		head->next = temp;
		return (temp);
	}
	if (new_element_index > current_index && head->next == NULL)
		return (NULL);
	if (head->next != NULL)
		rec4(head->next, new_element, current_index + 1, new_element_index, temp);
	return (NULL);
}
/**
 * insert_nodeint_at_index - insert node at index
 * @head: ptr to linked list
 * @idx: index of new element
 * @n: new element value
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	int current_index = 0;
	listint_t *q;

	q = malloc(sizeof(listint_t));
	if (q == NULL)
		return (NULL);
	if (head == NULL)
		return (NULL);

	return (rec4(*head, n, current_index, idx, q));
}
