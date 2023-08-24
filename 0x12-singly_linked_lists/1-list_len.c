#include "lists.h"
/**
 * list_len -  number of elements in a linked list_t list
 * @h:element
 * Return:element number or 0
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
