#include "lists.h"
/**
 * dlistint_len - prints the length of element in a list
 * @h:head of the element
 * Return:number of element
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
