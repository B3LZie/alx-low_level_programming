#include "main.h"

/**
 * reverse_array - reverse the given array
 * @a: the array
 * @n: the size of the array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
