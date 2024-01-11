#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - insert at index
 * @h: list head
 * @idx: index
 * @n: n value
 * Return: new adress
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
  	 

	 

	if (h == NULL || *h == NULL)
		return (NULL);

	 
	if (idx == 0)
		return (add_dnodeint(h, n));
	

	return (NULL);
}
