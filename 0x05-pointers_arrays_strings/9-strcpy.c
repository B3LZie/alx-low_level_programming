#include "main.h"

/**
 * *_strcpy - function to copy str pointed to by src
 * @dest: copying to this
 * @src: copying from this
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
