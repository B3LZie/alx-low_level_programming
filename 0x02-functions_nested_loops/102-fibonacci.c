#include <stdio.h>

/**
 * main - first 50 fibonacci
 * Return: 0
 */

int main(void)
{
	int i;
	long j, k, l;

	j = 1;
	k = 2;

	printf("%ld, %ld, ", j, k);
	for (i = 3; i <= 50; i++)
	{
		if (i != 50)
		{
			l = j + k;
			printf("%ld, ", l);
			j = k;
			k = l;
		}
		else
		{
			l = j + k;
			printf("%ld\n", l);
		}
	}
	return (0);
}
