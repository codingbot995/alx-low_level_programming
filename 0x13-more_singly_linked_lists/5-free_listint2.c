#include "lists.h"
/**
 * free_listint2 -  frees a listint_t list
 *@head:where the node list starts
 * Return:0 always
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;

	while (current != NULL)
	{
		listint_t *temp = current;

		current = current->next;
		free(temp);
	}
	*head = NULL;
}
