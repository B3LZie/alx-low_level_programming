#include <stdio.h>

/**
 * main - print fizz if num is x3 buzz if x5 fizzbuzz if x3x5 else num
 *
 * Return: 0 success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	
	printf("\n");
	return (0);
}
