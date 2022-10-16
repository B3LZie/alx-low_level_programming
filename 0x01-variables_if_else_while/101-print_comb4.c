#include <stdio.h>

/**
 * main - printing out 3s digit cominations
 *
 * Description: Printing combos in 3s of numbers
 * Return: 0 when main is done
 */

int main(void)
{
	int x, y, z;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			for (z = 0; z < 10; z++)
			{
				if (x == y || y == z || x > y || y > z)
					continue;

				putchar(x + '0');
				putchar(y + '0');
				putchar(z + '0');

				if (x == 7 && y == 8 && z == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
