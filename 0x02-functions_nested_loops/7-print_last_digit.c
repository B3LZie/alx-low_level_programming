#include "main.h"

/**
 * print_last_digit - prints last digit of given number
 * @i: number in question
 *
 * Return: the last digits
 */

int print_last_digit(int i)
{
	int r, t;

	if (i < 0)
	{
		r = i * -1;
		t = r % 10;
		_putchar(t + '0');
		return (t);
	}
	else
	{
		t = i % 10;
		_putchar(t + '0');
		return (t);
	}
}
