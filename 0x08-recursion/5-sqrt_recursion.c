#include "main.h"

/**
 * _sqrt_recursion - calculating the square root
 * @n: the number to find sqrt for
 * Return: square root
 */
int myfinder(int x, int y);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (myfinder(n, (n + 1) / 2));
	}
}

int myfinder(int x, int y)
{
	if (y == 0)
	{
		return (-1);
	}
	if (y * y == x)
	{
		return (y);
	}
	else
		return (myfinder(x, y - 1));
}
