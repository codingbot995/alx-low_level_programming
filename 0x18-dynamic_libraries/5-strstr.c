#include "main.h"
/**
 * _strstr - function that locates a substrin
 * @needle:substring to search for
 * @haystack:string to search from
 * Return:substring match
 */

char *_strstr(char *haystack, char *needle)
{
	while (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		char *n = needle;
		char *h = haystack;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
