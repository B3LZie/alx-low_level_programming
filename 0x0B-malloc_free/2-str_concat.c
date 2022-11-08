#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate 2 strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: the string concatenated
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int j, k;

	s = malloc(sizeof(s1) + sizeof(s2));
	j = 0, k = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (s == NULL)
		return (NULL);
	while (s1[j] != '\0')
	{
		s[j] = s1[j];
		j++;
	}
	while (s2[k] != '\0')
	{
		s[j] = s2[k];
		j++, k++;
	}
	return (s);
}
