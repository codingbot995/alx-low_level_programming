#include "main.h"
/**
 *sqrt_a - print natural sqrt of a number
 * @a:number
 * @b:interator
 * Return: sqrt
 */

int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1));
}
/**
 * _sqrt_recursion - print sqrt of a number
 * @n:number
 * Return: sqrt
 */

int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
