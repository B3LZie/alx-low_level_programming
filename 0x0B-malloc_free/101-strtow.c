#include "main.h"
#include  <stdlib.h>

/**
 * strtow - change strings to words
 * @str: the string to change to words
 * Return: a pointer to the string
 */

char **strtow(char *str)
{
	char **s;
	int k, i, count, height, w;

	i = 0, k = 0, count = 0, height = 0, w = 0;
	if (str == 0 || *str == 0)
		return (NULL);
	while (str[i] != '\0')
	{
		count++;
		if ((str[i] != 32 && (str[i + 1]) == 32) || str[i + 1] == '\0')
			height++;
		i++;
	}
	if (height == 0)
		return (NULL);
	s = malloc(sizeof(char *) * (height + 1));
	if (s == NULL)
		return (NULL);
	i = 0, count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != 32)
			count++;
		if (count > 0 && (str[i + 1] == 32 || str[i + 1] == '\0'))
		{
			s[w] = malloc((count + 1) * sizeof(char));
			if (s[w] == NULL)
				return (NULL);
			for (k = 0; k < count; k++)
				s[w][k] = str[i - count + 1 + k];
			s[w][k] = '\0';
			w++;
			count = 0;
		}
		i++;
	}
	s[height] = '\0';
	return (s);
}
