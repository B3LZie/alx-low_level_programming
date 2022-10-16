#include <stdio.h>

/**
 * main - print numbers
 *
 * Description: print numbers 0-9 using putchar
 * Return: 0 when done
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
	}

	putchar('\n');
	return (0);
}
