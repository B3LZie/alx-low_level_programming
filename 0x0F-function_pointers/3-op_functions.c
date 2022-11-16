#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - return sum of a and b
 * @a: var
 * @b: var
 *
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - return subtracted vals
 * @a: val
 * @b: val
 *
 * Return: subtracted
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply
 * @a: val
 * @b: val
 *
 * Return: multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: val
 * @b: val
 *
 * Return: division
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulus
 * @a: val
 * @b: val
 * Return: modulus
 */

int op_mod(int a, int b)
{
	return (a % b);
}
