#include "main.h"

/**
 * _isupper - checks upper case
 * @c: char to be checked
 *
 * Return: 0 when lower 1 when upper
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
