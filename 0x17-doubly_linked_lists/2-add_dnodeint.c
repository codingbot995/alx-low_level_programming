#include "lists.h"
/**
 * *add_dnodeint - add node at the beginning
 * @head:head of the list
 * @n:new element
 * Return :new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *h ;
	dlistint_t *new;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	h = *head;
	if (h  != NULL)
	{
		while (h->next == NULL)
			h = h->nextt;
		h->next = new;
	}
	else
	{
		*head = new;
	}
	new->prev = h;
	return (new);

}
