#include "main.h"

/**
 * rot13 - change text to leet code
 * @s: the string to be changed
 * Return: the string
 */

char *rot13(char *s)
{
	int i, j, b;
	char arr1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char arr2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	b = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		b = 0;
		for (j = 0; j <= 52; j++)
		{
			if (s[i] == arr1[j] && b == 0)
			{
				s[i] = arr2[j];
				b = 1;
			}
		}
	}
	return (s);
}
