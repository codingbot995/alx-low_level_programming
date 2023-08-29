#include "lists.h"
/**
 * sum_listint -  returns the sum of all the data (n)
 * @head:where the list node starts
 * Return:sum of linkedlist nodes
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
