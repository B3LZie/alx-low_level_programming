#include "main.h"

/**
 * _abs - Printing absolute number
 * @int: val to be tested
 * Return: The abs value
 */

int _abs(int x)
{
	if (x < 0)
	{
		int i;

		i = x * -1;
		return (i);
	}
	else
	{
		return (x);
	}
}
