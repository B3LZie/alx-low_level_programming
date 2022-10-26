#include "main.h"

/**
 * puts_half - print half of a string str
 * @str: string input
 */

void puts_half(char *str)
{
	int i, j, n;

	i = 0;
	j = 0;

	while (str[i] != '\0')
	{
		j++;
		i++;
	}

	n = j / 2;

	for (i = n; i < j; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
