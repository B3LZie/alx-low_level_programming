#include "main.h"

/**
 * _strcat - string concate
 * @dest: to
 * @src: from
 * Return: concatenated
 */

char *_strcat(char *dest, char *src)
{
	int i, j, k;

	j = 0, k = 0;
	for (i = 0; dest[i] != '\0'; i++)
	{
		j++;
	}

	for (i = j; src[k] != '\0'; i++)
	{
		dest[i] = src[k];
		k++;
	}
	return (dest);
}
