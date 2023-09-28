#include "main.h"
/**
 * get_endianness - checks the endianness of the system.
 *
 * Return: 1 if the system is little-endian, 0 if it's big-endian.
 */

int get_endianness(void)
{
	int num;

	num = 1;
	if (*(char *)&num == 1)
		return (1);
	return (0);
}
