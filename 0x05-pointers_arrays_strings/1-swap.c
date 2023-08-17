#include "main.h"
/**
 * swap_int - swap the numbers
 * @a:variable
 * @b:variable
 * Return:  always 0
 */

void swap_int(int *a, int *b)
{
	int c;//this was the initial 

	c = *a;//we swap to a
	*a = *b;//for a we swap it to be
	*b = c;//so a has b value and b has a value which is c we interchange them
}
