#include "main.h"
int is_prime_number(int a, int b);
/**
 * is_prime_number - checks if a number is a prime number
 * @n: the num to check
 * Return: 1 if prime and 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (checker(n, n / 2));
}

/**
 * checker - prime number checker
 * @a: the num to be checked
 * @b: the half to divide with
 * Return: 0 if num is not prime and 1 if it is
 */

int checker(int a, int b)
{
	if (b == 1)
		return (1);
	else if (a % b == 0)
		return (0);
	else
		return (checker(a, b - 1));
}
