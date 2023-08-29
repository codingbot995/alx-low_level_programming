#include "lists.h"
#include <stddef.h>
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head:where the node starts
 * Return:0 deleted head node data
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;

	if (*head != NULL)
	{
		temp = *head;/*storing the address of head*/
		data = temp->n;/*obtaining the value of the current head*/
		*head = temp->next;/*updating the pointer to the next node*/
		free(temp);/*Freeing the current head*/
	}
	return (data);
}
