#include <stdio.h>
/**
 * function_name - Short description of what the function does.
 *
 * Return: Description of the return value (if applicable).
 */

int main(void)
{
	int sum =0;
	int i;

	for (i = 0 ; i < 1024 ; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + i;
	}
	printf("%d\n", sum);
	return (0);
}
