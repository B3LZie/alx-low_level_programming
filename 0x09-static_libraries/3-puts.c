#include "main.h"

/**
 * _puts - printing a given string
 * @str - the string to be printed
 */

void _puts(char *str)
{
	char c;
	int i;

	c = str[0];
	i = 1;

	while (c != '\0')
	{
		_putchar(c);
		c = str[i++];
	}
	_putchar('\n');
}
