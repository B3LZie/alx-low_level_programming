#include "main.h"

/**
 * swap_int - swapping a and b
 * @a - the value to be swapped with b
 * @b - the vvalue to be swapped with a
 */

void swap_int(int *a, int *b)
{
	int *a1, *b1, w;

	a1 = a;
	b1 = b;
	w = *a;

	*a1 = *b;
	*b1 = w;
}
