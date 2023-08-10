#include "main.h"
/**
 * array_range - creates an array of integers
 * @min:minimum
 * @max:maximum
 *Return:arry_range
 */

int *array_range(int min, int max)
{
	int i, len;
	int *result;

	if (min > max)
		return (NULL);
	len = max + min + 1;
	result = malloc(sizeof(int) * len);
	if (result == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		result[i] = min;
		min++;
	}
	return (result);
}
