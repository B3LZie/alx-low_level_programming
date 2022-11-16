#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - fn that executes a fn given elm of arr
 * @array: the array
 * @size: the size of the arr
 * @action: the actions to choose from
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || size <= 0 || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
