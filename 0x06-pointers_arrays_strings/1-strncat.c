#include "main.h"
/**
 **_strncat - concanate two strings
 * @dest:destination of the string
 * @src:source of the string
 * @n:size of the string to coconcanate
 * Return:dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[len + i] = *src;
		src++;
	}
	dest[len + i] = '\0';
	return (dest);
}
