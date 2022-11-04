#include <stdio.h>

/**
 * main - printing all args in a new line
 * @argc: num of args
 * @argv: contents of args
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
