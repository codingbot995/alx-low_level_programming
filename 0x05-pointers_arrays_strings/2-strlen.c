#include "main.h"
/**
 * _strlen - return the length of a string
 * @s: length
 * Return:0
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\n'; i++)
		count++;
			return (count);
}
