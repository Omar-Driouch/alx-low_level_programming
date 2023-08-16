#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Adds two numbers
 * @a: The first number
 * @b: The second number
 *
 * Returns: The sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts one number from another
 * @a: The first number (minuend)
 * @b: The second number (subtrahend)
 *
 * Returns: The difference between a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two numbers
 * @a: The first number
 * @b: The second number
 *
 * Returns: The product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides one number by another
 * @a: The dividend
 * @b: The divisor
 *
 * Returns: The result of the division of a by b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Calculates the remainder of dividing one number by another
 * @num1: The dividend
 * @num2: The divisor
 *
 * Returns: The remainder of num1 divided by num2
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}