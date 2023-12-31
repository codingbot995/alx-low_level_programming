#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head:where the node starts
 * @n:element to add at the end of a list
 * Return:element in the node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		listint_t *n = *head;

		while (n->next != NULL)
		{
			n = n->next;
		}
		n->next = new_node;
	}
	return (new_node);
}
