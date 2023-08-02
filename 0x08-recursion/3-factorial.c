#include "main.h"
/**
 *factorial - print factorial on n
 *@n:factorial number
 *Return:factorial of the given number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
