#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an [] of chars & initialises it with a char
 * @size: the size of []
 * @c: the character
 *
 * Return: char pointer to char
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	i = 0;
	s = malloc(size * sizeof(char));
	if (size > 0)
	{
		while (i < size)
		{
			s[i] = c;
			i++;
		}
		return (s);
	}
	else
	{
		return (NULL);
	}
}
