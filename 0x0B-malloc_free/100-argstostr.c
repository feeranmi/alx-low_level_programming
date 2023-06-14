#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * argstostr - The function that concatenate all argument of program
  * @ac: the argument count
  * @av: the argument vector
  *
  * Return: the result of the concatenated argument
  */
char *argstostr(int ac, char **av)
{
	int len = 0;
	int p, q, r = 0;
	char *a;

	if (ac == 0 || av == NULL)
		return (NULL);

	/** calculating the length of the concatenated stings */
	for (p = 0; p < ac; p++)
	{
		len += strlen(av[p]) + 1;
	}
	a = malloc((len + 1) * sizeof(char));
	if (a == NULL)
		return (NULL);

	for (p = 0; p < ac; p++)
	{

	for (q = 0; av[p][q] != '\0'; q++)
	{
		a[r++] = av[p][q];
	}
	a[r++] = '\n';
	}
	a[r] = '\0';

	return (a);

}
