#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sum of the two diagonals of a square matrix of ins
 * @a: array
 * @size: the size
 */

void print_diagsums(int *a, int size)
{
	int i, j, t1, t2;

	t2 = 0;

	for (i = 0; i <= size * size; i = i + size + 1)
		t1 = t1 + a[i];
	for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
		t2 = t2 + a[n];
	printf("%d, %d\n", t1, t2);
}
