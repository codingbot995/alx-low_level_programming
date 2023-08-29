#include "lists.h"
/**
 * reverse_listint -  reverses a listint_t linked list
 * @head:where the node starts
 * Return:reversed linkedlist or 0
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;

	while (*head != NULL)
	{
		listint_t *next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
