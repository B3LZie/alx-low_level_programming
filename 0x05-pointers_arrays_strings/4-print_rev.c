#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s - string to be printed
 */

void print_rev(char *s)
{
	int i, j, k;
	char c;

	i = 1;
	j = 0;
	c = s[0];

	while (c != '\0')
	{
		j++;
		c = s[i++];
	}

	for (k = j; k >= 0; k--)
	{
		c = s[k];
		_putchar(c);
	}

	_putchar('\n');
}
