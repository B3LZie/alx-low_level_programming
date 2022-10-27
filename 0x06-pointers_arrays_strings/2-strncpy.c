#include "main.h"

/**
 * _strncpy - copy the src to dest by n chars
 * @dest: copy to here
 * @src: copy from here
 * @n: by how many chars
 * Return: return final char ie dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (i < n)
			dest[i] = src[i];
		while (i < n)
			dest[i++] = '\0';
	}
	return (dest);
}
