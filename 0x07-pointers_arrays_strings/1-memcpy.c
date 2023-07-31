#include "main.h"
/**
 * _memcpy - copies memory are
 * @dest: destination location
 * @src: source location
 * @n:number of byte to copy
 * Return:pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
