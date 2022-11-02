#include "main.h"
int myfinder(int x, int y);
/**
 * _sqrt_recursion - calculating the square root
 * @n: the number to find sqrt for
 * Return: square root
 */

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

/**
 * myfinder - finding the square root
 * @x: the number to find sqrt for
 * @y: possible sqrt vals
 * Return: sqrt val
 */

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
