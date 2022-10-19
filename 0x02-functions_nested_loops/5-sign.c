#include "main.h"

/**
 * print_sign - print number sign + - or 0
 * @n: number to be checked
 *
 * Return: 0 1 -1 when successful
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
