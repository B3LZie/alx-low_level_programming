#include <stdio.h>

/**
 * main - prints all number
 *
 * Description: prints all numbers seperated by , in asc order
 * Return: 0 when main is done
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');

		if (x == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}

