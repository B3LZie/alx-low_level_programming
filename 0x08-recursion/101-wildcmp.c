#include "main.h"
int _len(char *s);
int compare(char *s1, char *s2, int i, int j, int w, int lw, int l);

/**
 * wildcmp - comparing if the words are the same
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if not and 1 if equal
 */

int wildcmp(char *s1, char *s2)
{
	int i, j, w, lw, l;

	i = 0, j = 0, w = 1, lw = 0;
	l = _len(s1);
	return (compare(s1, s2, i, j, w, lw, l));
}

/**
 * _len - calculating length of the 2 strings
 * @s: the string
 * Return: the number
 */

int _len(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (_len(s + 1));
}

/**
 * compare - compare whether they are pallindromes
 * @s1: char 1
 * @s2: char 2
 * @i: iterator
 * @j: iterator
 * @w: wildcard
 * @lw: last wildcard
 * @l: lenght of s1
 * Return: 0 if not 1 if pallindrome
 */

int compare(char *s1, char *s2, int i, int j, int w, int lw, int l)
{
	if (s2[j] == '\0' && (s2[j - 1] == '*' || s2[j - 1] == s1[l - 1]))
		return (1);
	if (s2[j] == '*')
	{
		lw = ++j;
		w = 1;
		return (compare(s1, s2, i, j, w, lw, l));
	}
	if (s2[j] == s1[i])
	{
		i++;
		j++;
		w = 0;
		return (compare(s1, s2, i, j, w, lw, l));
	}
	if (s1[i] != s2[j] && w == 1)
	{
		if (s1[i] == '\0')
			return (0);
		i++;
		return (compare(s1, s2, i, j, w, lw, l));
	}
	if (s1[i] == '\0')
		return (0);
	if (s1[i] != s2[j] && w == 0)
	{
		j = lw;
		w = 1;
		if (lw == 0)
			return (0);
		return (compare(s1, s2, i, j, w, lw, l));
	}
	return (0);
}
