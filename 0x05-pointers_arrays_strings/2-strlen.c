#include "main.h"
/**
 * _strlen - return the length of a string
 * @s: length
 * Return:0
 */

int _strlen(char *s)
{
	int i; //we will use it to loop over the length
	int count = 0;//keep trace of the length

	for (i = 0; s[i] != '\0'; i++)//we are now looping till we find \0 where the loop terminate
	{
		count++;//increment the loop
	}
			return (count);
}
