#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * get_op_func - matches operator from main
 * @s: op str
 * Return: 0 always
 */
int (*get_op_func(char *s))(int, int)
{
	op_t op_s[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int j = 0;

	while (op_s[j].op)
	{
		if (*(op_s[j].op) == *s)
			return (op_s[j].f);
		j++;
	}
	return (NULL);
}
