#include <stdio.h>
#include <stdlib.h>

/**
 * main - adding two numbers
 * @argc: num of args
 * @argv: content of args
 * Return: 0 success 1 failure
 */

int main(int argc, char *argv[])
{
	int i, sum;

	sum = 1;
	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			sum *= atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
