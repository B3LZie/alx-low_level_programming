#include "main.h"
#include <stddef.h>

/**
 * _strchr - locating a character in a string
 * @s: string
 * @c: character
 * Return: the location
 */

char *_strchr(char *s, char c)
{
	int i, j, k;
	char *str;

	k = 0, i = 0;
	str = &c;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			for (j = i; s[j] != '\0'; j++)
			{
				str[k] = s[j];
				k++;
			}
			return str;
		}
		i++;
	}
	return NULL;
}
