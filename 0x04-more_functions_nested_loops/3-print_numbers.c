#include "main.h"
/**
 * print_numbers - prints number(1 through 9)
 * Return: 0 always
 */

void print_numbers(void)
{
	int c;

	for (c = 48 ; c < 58 ; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
