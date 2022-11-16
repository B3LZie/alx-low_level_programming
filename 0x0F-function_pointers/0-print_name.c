#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - fn to print name using pointer
 * @name: the name
 * @f: the pointer to the name printer
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
