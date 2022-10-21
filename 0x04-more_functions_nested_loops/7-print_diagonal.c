#include "main.h"

/**
 * print_diagonal - print a diagonal line of length n
 * @n: length of diagonal line
 */

void print_diagonal(int n)
{
	int i;

	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			int x;

			for (x = 0; x < i; x++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
