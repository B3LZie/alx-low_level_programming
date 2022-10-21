#include "main.h"

/**
 * print_square - print a square given size
 * @size: size of the square
 */

void print_square(int size)
{
	if (size == 0 || size < 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < size; i++)
		{
			int j;

			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
