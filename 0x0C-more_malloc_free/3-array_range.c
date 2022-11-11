#include "main.h"
#include <stdlib.h>

/**
 * array_range - fn creating arr of ints
 * @min: the min val in arr
 * @max: the max val in arr
 *
 * Return: pointer to the arr
 */

int *array_range(int min, int max)
{
	int *p, i;

	i = 0;
	if (min > max)
		return (NULL);
	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);
	while (min <= max)
	{
		p[i] = min;
		min++, i++;
	}
	return (p);
}
