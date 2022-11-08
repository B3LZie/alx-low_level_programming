#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenate all arguments of program
 * @ac: the number of args
 * @av: the contents of the args
 *
 * Return: return concatenated string
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int i, j, k, counter, a, b;

	counter = 0, k = 0, a = 0, b = 0;
	while (a < ac)
	{
		while(av[a][b] != '\0')
		{
			counter++;
			b++;
		}
		a++;
	}
	s = malloc((counter + ac + 1) * sizeof(char));
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0, j = 0; i < ac && j < ac * 2; i++, j += 2)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		s[k] = '\n';
		k++;
	}
	return (s);
}
