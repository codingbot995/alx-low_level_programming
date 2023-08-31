#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given inde
 * @index:index num provided
 * @n:bit provided
 * Return: 1 0r -1 if it fails
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = ((1UL << index) | *n);
	return (1);
}
