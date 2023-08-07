#include "main.h"
/**
 *_strdup - copies a string to a newly allocated space in memory
 *@str:is the string to copy to a new memory
 *Return:pointer to a new memory allocated
 */

char *_strdup(char *str)
{
	int k;
	char *copy;
	int count = 0;

	if (str == NULL)
		return (NULL);
	for (k = 0; str[k] != '\0'; k++)
		count++;

	copy = malloc(sizeof(char) * (count + 1));

		if (copy == NULL)
			return (NULL);
	for (k = 0; str[k] != '\0'; k++)
		copy[k] = str[k];
	return (copy);
}
