#include "main.h"
/**
 * *_strncpy - copies a string
 * @dest:destination of a string
 * @src:source of a string
 * @n:length of a string to be copied
 * Return:dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
