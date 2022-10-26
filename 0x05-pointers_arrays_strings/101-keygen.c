#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main  - generating a password
 *
 * Return: always 0
 */

unsigned long cs(char *s);

int main (void)
{
	int i, f;
	unsigned long sum;
	char a[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s[33];

	srand(time(NULL));
	while (f == 0)
	{
		for (i = 0; i < 33; i++)
		{
			s[i] = a[rand() % (sizeof(a) - 1)];
		}
		s[i] = '\0';
		sum = cs(s);
		if (sum == 2772)
		{
			f = 1;
			printf("%s", s);
		}
	}
	return (0);
}

unsigned long cs(char *s)
{
	unsigned long sum;
	sum = 0;
	while (*s != 0)
	{
		sum += *s;
		s++;
	}
	return (sum);
}
