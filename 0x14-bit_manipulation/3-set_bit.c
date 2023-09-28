#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: num to change
 * @index: index of bit to be set to 1
 *
 * Return: 1 for success, -1 for failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1ul << index) | *n);
	return (1);
}
