#include "main.h"

/**
 * _isdigit - checks for digits
 * @c: char to be checked
 *
 * Return: 0 when not 1 when digit
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
