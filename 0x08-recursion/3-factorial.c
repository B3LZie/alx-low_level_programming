#include "main.h"

/**
 * factorial - calculating the factorial
 * @n: the number for the factorial
 * Return: the sum
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
