#include <stdio.h>
#include <ctype.h>

/**
 * main - print alphabet and exclude q and e
 *
 * Description: printing the slpabet without q and e
 * Return: 0 when complete
 */

int main(void)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		char small;

		small = tolower(x);

		if (small == 'e' || small == 'q')
		{
		}
		else
		{
			putchar(small);
		}
	}

	putchar('\n');
	return (0);
}
