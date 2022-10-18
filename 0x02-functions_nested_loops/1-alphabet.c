#include "main.h"
#include <ctype.h>

/**
 * print_alphabet - print the alphabet
 *
 * Return: void
 */

void print_alphabet(void)
{
	char s;

	for (s = 'A'; s <= 'Z'; s++)
	{
		char s1;

		s1 = tolower(s);
		_putchar(s1);
	}

	_putchar('\n');
}
