#include <stdio.h>

/**
 * main - fibonacci first 98
 *
 * Return: 0 always
 */

int main(void)
{
	int i;
	unsigned long j, k, l, j1, k1, j2, k2, su, sd;

	j = 1, k = 2, l = 3;
	printf("%lu, %lu, ", j, k);
	for (i = 3; i <= 92; i++)
	{
		l = j + k;
		j = k;
		k = l;
		printf("%lu, ", l);
	}
	j1 = j / 1000000000;
	j2 = j / 1000000000;
	k1 = k / 1000000000;
	k2 = k / 1000000000;
	for (i = 93; i <= 98; i++)
	{
		su = j1 + k1;
		sd = j2 + k2;
		if (i == 95 || i == 96 || i == 97 || i == 98)
		{
			su = su + 1;
			sd = sd % 1000000000;
		}
		if (i == 98)
		{
			printf("%lu%lu\n", su, sd);
		}
		else
		{
			printf("%lu%lu, ", su, sd);
		}
		j1 = k1;
		j2 = k2;
		k1 = su;
		k2 = sd;
	}
	return (0);
}
