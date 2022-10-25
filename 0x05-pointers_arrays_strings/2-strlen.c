#include "main.h"

/**
 * _strlen - length of a string 
 * @s: string to be measured
 * Return: length of string
 */

int _strlen(char *s)
{
	int i, j;
	char c;

	i = 1;
	j = 0;
	c = s[0];

	while (c != '\0')
	{
		j++;
		c = s[i++];
	}

	return (j);
}
