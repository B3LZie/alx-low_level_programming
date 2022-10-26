#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main  - generating a password
 *
 * Return: always 0
 */

int main (void)
{
	int i, f;
	unsigned long sum;
	char a[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s[33];

	srand(time(NULL));
	while (flag == 0)
	{
		for (i = 0; i < 33; i++)
		{
			s[i] = a[rand() % (sizeof(a) - 1)];
		}
		s[i] = '\0';
		sum = checksum(s);
		if (sum == 2772)
		{
			flag = 1;
			printf("%s", s);
		}
	}
	return (0);
}
