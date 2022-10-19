#include "main.h"
#include <ctype.h>

/**
 * _islower - checks which one is lower
 * @c: number to be checked
 *
 * Return: 0 when upper 1 when lower
 */

int _islower(int c)
{
	if (c >= 65 && c <= 90)
		return (0);
	else
		return (1);
}
