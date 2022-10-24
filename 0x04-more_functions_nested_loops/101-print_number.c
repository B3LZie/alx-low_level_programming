#include "main.h"

/**
 * print_number - function to print numbers
 * @n: the number to be printed
 */

void print_number(int n)
{
	int a, b, c, d, e;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;

	}
	
	if (n == 0)
	{
		_putchar('0');
	}
	else if (n > 0 || n < 99)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n > 99 || n <= 999)
	{
		_putchar(n / 100 + '0');
		a = n / 10;
		d = a % 10;
		e = n % 100;
		_putchar(d + '0');
		_putchar(e + '0');
	}
	else
	{
		_putchar(n / 1000 + '0');
		b = n / 100;
		c = n / 10;
		_putchar(b % 10 + '0');
		_putchar(c % 100 + '0');
		_putchar(n % 1000 + '0');
	}
}
