#include "main.h"
/**
 * _memset - fill memory with aconstant byte
 * @s: areato fill with the byte
 * @b: constant byte
 * @n: number of byte
 * Return:pointer to  s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
