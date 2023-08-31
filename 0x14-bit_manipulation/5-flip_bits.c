#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: number of bits
 * @m:number of bits
 * Return:fliped number of bit
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}
	return (count);
}