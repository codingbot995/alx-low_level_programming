#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - print all varible types
 * c = char, i = int, f = float, s = char * (if null print (nil))
 * @format: list of argument types
 * Return: 0 or varible in success
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	int n = 0, j = 0;
	char *sep = ", ";
	char *str;

	va_start(valist, format);

	while (format && format[j])
		j++;

	while (format && format[n])
	{
		if (n  == (j - 1))
		{
			sep = "";
		}
		switch (format[n])
		{
		case 'c':
			printf("%c%s", va_arg(valist, int), sep);
			break;
		case 'i':
			printf("%d%s", va_arg(valist, int), sep);
			break;
		case 'f':
			printf("%f%s", va_arg(valist, double), sep);
			break;
		case 's':
			str = va_arg(valist, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", str, sep);
			break;
		}
		n++;
	}
	printf("\n");
	va_end(valist);
}
