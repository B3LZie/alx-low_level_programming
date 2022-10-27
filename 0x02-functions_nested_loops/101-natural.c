#include <stdio.h>

/**
 * main - multiples of 3 and 5 under 1024
 * Return: 0 always
 */

int main(void)
{
	int i, m;
	m = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			m += i;
		}
	}
	printf("%d\n", m);
	return (0);
}
