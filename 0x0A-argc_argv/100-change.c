#include <stdio.h>
#include <stdlib.h>

int mycalc(int);

/**
 * main - calculating minimum change
 * @argc: the num of args
 * @argv: the contents of args
 * Return: 0 success 1 failure
 */

int main(int argc, char *argv[])
{
	int cent;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}	
	cent = atoi(argv[1]);
	if (cent < 0)
		printf("0\n");
	else
		printf("%d\n", mycalc(cent));
	return (0);
}

/**
 * mycalc - calculate number of changes
 * @cent: the change to calculate for
 * Return: the number of changes
 */

int mycalc(int cent)
{
	int num, i;

	if (cent >= 25)
	{
		i = cent / 25;
		num = cent - (25 * i);
		return (i + (mycalc(num)));
	}
	else if (cent >= 10)
	{
		i = cent / 10;
		num = cent - (10 * i);
		return (i + (mycalc(num)));
	}
	else if (cent >= 5)
	{
		i = cent / 5;
		num = cent - (5 * i);
		return (i + (mycalc(num)));
	}
	else if (cent >= 2)
	{
		i = cent / 2;
		num = cent - (2 * i);
		return (i + (mycalc(num)));
	}
	else if (cent == 1)
		return (1);
	else
		return (0);
}
