#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicating a string
 * @str: the string to be duplicated
 *
 * Return: the string to be duplicated
 */

char *_strdup(char *str)
{
	char *s;
	int i;

	i = 0;
	s = malloc(sizeof(str));
	if (str != NULL)
	{
		while (str[i] != '\0')
		{
			s[i] = str[i];
			i++;
		}
		return (s);
	}
	else
	{
		return (NULL);
	}
}
