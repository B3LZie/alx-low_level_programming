#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concat 2 strings
 * @s1: string 1
 * @s2: string 2
 * @n: val
 *
 * Return: concat string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, s1size, s2size;
	char *mys;

	s1size = 0, s2size = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[s1size] != '\0')
		s1size++;
	while (s2[s2size] != '\0')
		s2size++;
	if (n > s2size)
		n = s2size;
	mys = malloc((s1size + n + 1) * sizeof(char));
	if (mys == NULL)
		return (NULL);
	for (i = 0; i < s1size; i++)
		mys[i] = s1[i];
	for (; i < (s1size + n); i++)
		mys[i] = s2[i - s1size];
	mys[i] = '\0';
	return (mys);
}
