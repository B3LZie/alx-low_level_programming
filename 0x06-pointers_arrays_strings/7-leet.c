#include "main.h"

/**
 * leet - change text to leet code
 * @s: the string to be changed
 * Return: the string
 */

char *leet(char *s)
{
	int i, j;
	char arr1[] = {'a','A','e','e','o','O','t','T','l','L'};
	char arr2[] = {'4','3','0','7','1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (s[i] == arr1[j])
			{
				s[i] = arr2[j / 2];
				break;
			}
		}
	}
	return (s);
}
