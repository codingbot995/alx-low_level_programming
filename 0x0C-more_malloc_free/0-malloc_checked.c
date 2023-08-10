#include "main.h"
/**
 * malloc_checked - allocates memory
 * @b:size of string
 * Return:void
 */

void *malloc_checked(unsigned int b)
{
	char *result;

	result = malloc(b);
	if (result == NULL)
		return (NULL);
	else
		return (result);
}
