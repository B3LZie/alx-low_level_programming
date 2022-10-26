#include "main.h"

/**
 * puts_half - print half of a string str
 * @str: string input
 */

void puts_half(char *str)
{
	int i, j;

	i = 0;
	j = 0;

	while (str[i] != '\0')
	{
		j++;
		i++;
	}

	for (i = ((j) / 2); i < j; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
