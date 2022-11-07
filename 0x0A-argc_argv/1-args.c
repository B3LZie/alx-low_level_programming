#include <stdio.h>

/**
 * main - program that prints the num of args passed into it
 * @argc: the number if args
 * @argv: the content of the args
 * Return: 0 success
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
