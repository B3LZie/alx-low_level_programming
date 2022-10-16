#include <stdio.h>
#include <ctype.h>

/**
 * main - print hex numbers
 *
 * Description: print 0-9 first then letters a-f next
 * Return: 0 when main is done
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
	}

	for (x = 'A'; x <= 'F'; x++)
	{
		char small;

		small = tolower(x);
		putchar(small);
	}

	putchar('\n');
	return (0);
}
