#include "main.h"
/**
 * get_bit - Get the value of a bit at a given index.
 * @n :number of bit
 *@index:index of the provided bit
 * Return :index of bit or NULL
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n & mask) ? 1 : 0);
}
