#include "lists.h"
/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list
 * @head:where the node starts
 * @index:where to find the nth node
 * Return: nth node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		count++;
		current = current->next;
	}
	return (NULL);
}
