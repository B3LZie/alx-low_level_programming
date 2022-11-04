#include "main.h"
#include <stddef.h>

/**
 * _strstr - locating a substring
 * @haystack: the where to find
 * @needle: string to be found
 * Return: pointer to the bgnning of located substring
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}
		if (*b == '\0')
			return (haystack);
	}
	return (NULL);
}
