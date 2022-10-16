#include <stdio.h>
#include <ctype.h>

/**
 * main - printing alphabt in reverse
 *
 * Description: Printing the alphabet in reverse
 * Return: 0 when main is done
 */

int main(void)
{
	int x;

	for (x = 'Z'; x >= 'A'; x--)
	{
		char small;

		small = tolower(x);
		putchar(small);
	}

	putchar('\n');
	return (0);
}
