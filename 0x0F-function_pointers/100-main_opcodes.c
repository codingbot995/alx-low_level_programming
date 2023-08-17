#include<stdio.h>
#include<stdlib.h>
/**
 * main- Entry point
* a blank line
 *@argc: the number of parameters count.
 *@argv: the parameeters in the case the number ob bytes.
* Description: this program prints opcodes in hexa)?
* Return: 0 in success
*/
int main(int argc, char *argv[])
{
	int j, n;


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (j = 0; j < n; j++)
	{
		printf("%02hhx", *((char *)main + j));
		if (j < n - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
