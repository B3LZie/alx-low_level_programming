#include "main.h"

/**
 * print_number - function to print numbers
 * @n: the number to be printed
 */

void print_number(int n)
{
	if (n < 99)
	{
		_putchar(n / 10);
		_putchar(n % 10);
	}
	else if (n < 999)
	{
		_putchar(n / 100);

		int a;

		a = n / 10;

		_putchar(a % 10);
		_putchar(n % 100);
	}
	else
	{
		_putchar(n / 1000);

		int b, c;

		b = n / 100;
		c = n / 10;
		_putchar(b % 10);
		_putchar(c % 100);
		_putchar(n % 1000);
	}
}
