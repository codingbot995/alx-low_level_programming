#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print num of args
 * @n:number of argument
 * @separator:the string to be printed between number
 * Return:0 or arg in success
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		int num = va_arg(list, int);

		printf("%d", num);
		if (i <  n - 1)
		{
		if (separator != NULL)
		{
			printf("%s", separator);
		}
		}
	}
	va_end(list);
	printf("\n");
}
