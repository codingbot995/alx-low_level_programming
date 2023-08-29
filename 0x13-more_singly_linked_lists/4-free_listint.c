#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head:where the list starts
 * Return:0 always
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		listint_t  *temp = head;

		head = head->next;
		free(temp);
	}
}
