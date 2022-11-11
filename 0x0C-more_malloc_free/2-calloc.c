#include "main.h"
#include <stdlib.h>

/**
 * _calloc - fn allocates memoryfor an arr using malloc
 * @nmemb: number of elements
 * @size:  the size in bytes
 *
 * Return: pointer to allocated array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	i = 0;
	p = malloc(nmemb * size);
	if (nmemb == 0 || size == 0)
		return (NULL);
	if (p == NULL)
		return (NULL);
	while (i < nmemb)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
