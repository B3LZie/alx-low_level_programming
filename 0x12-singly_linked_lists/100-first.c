#include "lists.h"
#include <stdio.h>

void print_first(void) __attribute__ ((constructor));

/**
 * print_first - print this before you reach the main method
 */

void print_first(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
