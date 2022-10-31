#include "main.h"
#include <ctype.h>

/**
 * string_toupper - change all lower case strings to upper
 * @s: string to be changed to upper
 * Return: string in upper
 */

char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = toupper(s[i]);
		}
		i++;
	}
	return (s);
}
