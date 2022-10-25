#include "main.h"

/**
 * reset_to_98 - reset pointer value to 98
 * @*n - address to be changed
 */

void reset_to_98(int *n)
{
	int *p;

	p = n;
	*p = 98;
}
