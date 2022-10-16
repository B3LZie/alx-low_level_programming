#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - Prints alphabet
 *
 * Description: It will print alphabet in lowercase
 *
 * Return: 0 if successful
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

	putchar('\n');
	return (0);
}
