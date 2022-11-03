#include "main.h"
int len(char *s);
int checker(char s[], int b, int e);

/**
 * is_palindrome - to check whether s is palindrome or not
 * @s: string to be checked
 * Return: 1 if yes 0 if no
 */

int is_palindrome(char *s)
{
	int length;

	length = len(s);

	if (length == 0)
		return (1);
	return (checker(s, 0, length - 1));
}

/**
 * len - calculate length of string s
 * @s: the string to be legthised
 * Return: the number
 */

int len(char *s)
{
	if (*s != '\0')
		return (1 + len(s + 1));
	return (0);
}

/**
 * checker - check if palindrome
 * @s: the string
 * @b: the beginning of string
 * @e: the end of string
 * Return: 0 if not 1 if yes
 */

int checker(char s[], int b, int e)
{
	if (b >= e)
		return (1);
	if (s[b] != s[e])
		return (0);
	if (b <= e || b < e - 1)
		return (checker(s, b + 1, e - 1));
	return (1);
}
