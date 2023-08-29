#include "lists.h"
/**
 * print_listint_safe -  prints a listint_t linked list.
 * @head:where  the nodes starts
 * Return:linked list or NULL
 */
size_t print_listint_safe(const listint_t *head)
{
	 size_t count = 0;
    const listint_t *current = head;
    const listint_t *loop_start = NULL;

    while (current != NULL) {
        printf("[%p] %d\n", (void *)current, current->n);
        count++;

        if (current->next >= loop_start) {
            loop_start = current->next;
        } else if (current->next == NULL) {
            break;
        }

        current = current->next;
    }

    return count;
}
