#include <stdio.h>

/**
 * main - first 50 fibonacci
 * Return: 0 always
 */

int main(void)
{
	long i, j, k, m;
	i = 1;
	j = 2;
	k = 3;
	m = 2;
	while (k < 4000000)
	{
		k = i + j;
		i = j;
		j = k;
		if (k % 2 == 0)
		{
			m = m + k;
		}
	}
	printf("%ld\n", m);
	return (0);
}
