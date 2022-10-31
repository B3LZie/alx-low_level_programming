#include "main.h"
#include <ctype.h>

/**
 * cap_string - capitalise all words of string
 * @s: string to be capitalised
 * Return: the new string
 */

char *cap_string(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
		{
		}
		else if (s[i] == '\\')
		{
			s[i + 2] = toupper(s[i + 2]);
			i = i + 2;
		}
		else
		{
			s[i + 1] = toupper(s[i + 1]);
		}
		i++;
	}
	return (s);
}
