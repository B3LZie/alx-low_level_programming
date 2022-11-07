#include <stdio.h>

/**
 * main - program that prints its name
 * Description: rename the program, it will print the new name,
 * without having to compile it again
 * You should not remove the path before the name of the program
 * @argc: the number of args
 * @argv: the contents pf the args
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
