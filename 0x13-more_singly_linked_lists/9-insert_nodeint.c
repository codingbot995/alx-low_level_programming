#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head:start of the node
 * @idx:index to insert to
 * @n:element to insert
 * Return:element inserted or 0
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *new_node, *current;

	if (head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	/*inserting in the beggining*/
	if (idx == 0)
	{
		new_node->next = *head;/*setting next pointer to head*/
		*head = new_node;/*Updating the head pointer*/
		return (new_node);
	}
	/*inserting in the middle*/
	current = *head;
	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}
	if (current == NULL || count != idx - 1)
	{
		free(new_node);
	}
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}
