#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - add numbers
 * @argc: the num of args
 * @argv: the contents of args
 * Return: 0 succss 1 fail
 */

int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
