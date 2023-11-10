#include "lists.h"
/**
 * add_dnodeint - add new node at the beginning
 * @head:head of the list
 * @n:element of lists
 * Return :new list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint *new_node = malloc(sizeof(dlistint));

	if (new_node == NULL)
		return (NULL);
	new_node->next = n;
	new_node->prev = NULL;

	if (*head != NULL)
	{
		new_node->next = *head;
		(*head)->prev = new_node;
	}
	else
	{
		new_node->next = NULL;
	}
	*head = new_node;
	return (new_node);
}
