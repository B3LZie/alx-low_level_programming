#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - getting the operation to carry out
 * @s: the string
 *
 * Return: the operation
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op)
	{
		if (strcmp((ops[i].op), s) == 0)
			return (ops[i].f);
		i++;
	}
	printf("Error\n");
	exit(99);

	return (0);
}
