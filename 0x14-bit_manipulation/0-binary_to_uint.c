#include "main.h"
/**
 *binary_to_uint - converts a binary number to an unsigned int
 * @b:numbers provided to convert them
 * Return:binary numbers or NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int base = 1;
	int len = strlen(b);
	int i;

	if (b == NULL)
	{
		return (0);
	}
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		result += (b[i] - '0') * base;
		base *= 2;
	}
	return (result);
}
