#include "main.h"

/**
 * _strncat - concatenate str to dest
 * @src: string to be concatenated
 * @dest: string to be added to
 * @n: number of string to add
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, k;

	j = 0, k = 0;
	for (i = 0; dest[i] != '\0'; i++)
	{
		j++;
	}
	for (i = j; src[k] != '\0' && k < n; i++)
	{
		dest[i] = src[k];
		k++;
	}
	return (dest);
}
