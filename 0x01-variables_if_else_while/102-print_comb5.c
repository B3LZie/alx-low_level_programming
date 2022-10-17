#include <stdio.h>

/**
 * main - printing out 2 2 digit cominations
 *
 * Description: Printing combos in 2s of 2 numbers
 * Return: 0 when main is done
 */

int main(void)
{
	int w, x, y, z;

	for (w = 0; w < 10; w++)
	{
		for (x = 0; x < 10; x++)
		{
			for (y = w; y < 10; y++)
			{
				for (z = x; z < 10; z++)
				{
					if (w == y && x == z)
						continue;

					putchar(w + '0');
					putchar(x + '0');
					putchar(' ');
					putchar(y + '0');
					putchar(z + '0');

					if (w == 9 && x == 8 && y == 9 && z == 9)
						continue;

					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
