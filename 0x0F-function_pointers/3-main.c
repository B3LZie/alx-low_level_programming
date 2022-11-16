#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main
 * @argc: the num of args
 * @argv: the contents
 *
 * Return: 0 success
 */

int main(int argc, char *argv)
{
	int a;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[3] == 0 && (argv[2] == '/' || argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	if (*argv[2] == '+' || *argv[2] == '-' || *argv[2] == '*' || *argv[2] == '/'
			|| *argv[2] == '%')
	{
		a = (*get_op_func(argv[2]))((atoi(argv[1])), (atoi(argv[3])));
		printf("%d\n", a);
	}
	else
	{
		printf("Error\n");
		exit(99);
	}
	return (0);
}
