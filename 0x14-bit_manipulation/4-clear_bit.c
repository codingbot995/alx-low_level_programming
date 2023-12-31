#include "main.h"

/**
* clear_bit - sets value of a bit to 0 at a given index
* @n: decimal number
* @index: index position to  be changed
* Return: 1 if it worked, -1 if error
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
