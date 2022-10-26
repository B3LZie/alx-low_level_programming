#include "main.h"

/**
 * rev_string - reverses strings
 * @s: the string to be reversed
 */

void rev_string(char *s)
{
	int i, j;
	char r = s[0];

	j = 0;

	while (s[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < j; i++)
	{
		j--;
		r = s[i];
		s[i] = s[j];
		s[j] = r;
	}
}
