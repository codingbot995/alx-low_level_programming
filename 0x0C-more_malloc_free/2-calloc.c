#include "main.h"
/**
 * _calloc -  allocates memory for an array
 * @nmemb:number of arry members to
 * @size:size of the arr
 * Return:the newly allocated arr pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *result;

	if (nmemb == 0 || size == 0)
		return (NULL);

	result = calloc(nmemb, size);
	if (result == NULL)
		return (NULL);
	else
		return (result);
}
