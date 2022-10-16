#include <stdio.h>

/**
 * main - printing out 2s digit cominations
 *
 * Description: Printing combos in 2s of numbers
 * Return: 0 when main is done
 */

int main(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (x == y || x > y)
				continue;

			putchar(x + '0');
			putchar(y + '0');

			if (x == 8 && y == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
