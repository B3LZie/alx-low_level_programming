#include "main.h"

/**
 * times_table - print the times table of 0 -9
 */

void times_table(void)
{
	int i, j, m;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			m = i * j;

			if (j == 9)
			{
				if (m >= 0 && m <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(m + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(m / 10 + '0');
					_putchar(m % 10 + '0');
				}
			}
			else
			{
				if (m >= 0 && m <= 9)
				{
					if (j == 0)
					{
						_putchar(m + '0');
						_putchar(',');
					}
					else
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(m + '0');
						_putchar(',');
					}
				}
				else
				{
					_putchar(' ');
					_putchar(m / 10 + '0');
					_putchar(m % 10 + '0');
					_putchar(',');
				}
			}
		}
		_putchar('\n');
	}
}
