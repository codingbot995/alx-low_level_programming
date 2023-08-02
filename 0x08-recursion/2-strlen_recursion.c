#include "main.h"
/**
 * _strlen_recursion - print string length
 * @s:string
 * Return:string length
 */

int _strlen_recursion(char *s)
{
	int longint = 0;

	if (*s != '\0')
	{
		longint++;
		longint += _strlen_recursion(s + 1);
	}
	return (longint);
}
