#include"main.h"
/**
 * argstostr -  Concatenates all arguments with newlines
 * @ac:argument num
 * @av:array of argument string
 * Return:concanated string
 */

char *argstostr(int ac, char **av)
{
	int i;
	int j;
	char *p = NULL;
	int k;
	int t;

	k = 0;
	t = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			t++;
		}
	}

	p = (char *)malloc(t + ac + 1 * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			p[k] = av[i][j];
			k++;
		}
		p[k] = '\n';
		k++;
	}
	p[k] = '\0';
	return (p);
}
