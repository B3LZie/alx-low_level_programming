#include <stdio.h>
#include <ctype.h>

/**
 * main - prints alphabet
 *
 * Description: Prints alphabet in lowercase then uppercase
 *
 * Return: 0 when complete
 *
 */

int main(void)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		char small;

		small = tolower(x);
		putchar(small);
	}

	for (x = 'A'; x <= 'Z'; x++)
	{
		char big;

		big = x;
		putchar(big);
	}

	putchar('\n');
	return (0);
}
