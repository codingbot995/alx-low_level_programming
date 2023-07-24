#include "main.h"
/**
 * swap_int - swap the numbers
 * @a:variable
 * @b:variable
 * Return:  always 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
