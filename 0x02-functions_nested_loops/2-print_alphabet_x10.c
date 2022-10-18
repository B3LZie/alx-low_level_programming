#include "main.h"
#include <ctype.h>

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: nothing
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char s;

		for (s = 'A'; s <= 'Z'; s++)
		{
			char s2;

			s2 = tolower(s);
			_putchar(s2);
		}

		_putchar('\n');
	}
}
