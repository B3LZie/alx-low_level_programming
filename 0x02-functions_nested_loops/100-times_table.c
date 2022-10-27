#include "main.h"

/**
 * print_times_table - the time table is printed
 * @n: the n times table
 */

void print_times_table(int n)
{
	int i, j, m;

	if (n > 0 && n < 15)
	{ 
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				m = i * j;
				if (m > 0 && m <= 9)
				{
					_putchar(m + '0');
					if (j < n)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
				}
				else if (m > 9 && m <= 99)
				{
					_putchar(m / 10 + '0');
					_putchar(m % 10 + '0');
					if (j < n)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
					}
				}
				else
				{
					_putchar(m / 100 + '0');
					_putchar((m / 10) % 10 + '0');
					_putchar(m % 100 + '0');
					if (j < n)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
			}
		}
	}
}
