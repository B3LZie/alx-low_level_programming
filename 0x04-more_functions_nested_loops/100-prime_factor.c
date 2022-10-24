#include <stdio.h>
#include <math.h>

/**
 * main - function to calculate the prime factors of a number
 * Return: 0 success
 */

int main(void)
{
	int i;
	
	long j;

	j = 612852475143;

	while (j % 2 == 0)
	{
		printf("%d ", 2);
		j = j / 2;
	}

	for (i = 3; i < sqrt(j); i += 2)
	{
		while (j % i == 0)
		{
			printf("%d, ", i);
			j = j / i;
		}
	}

	if (j > 2)
		printf ("%ld\n", j);

	return (0);
}
