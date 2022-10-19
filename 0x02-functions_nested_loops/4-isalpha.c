#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks which one is lower
 * @c: number to be checked
 *
 * Return: 0 when not alpha 1 when alpha
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
