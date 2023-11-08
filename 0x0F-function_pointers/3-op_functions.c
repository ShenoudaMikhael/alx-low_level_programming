#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - add numbers
 * @a: number 1
 * @b: number 2
 * Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtract
 * @a: number 1
 * @b: number 2
 * Return: int
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply numbers
 * @a: number 1
 * @b: number 2
 * Return: int
 */
int op_mul(int a, int b)
{
	return ((a) * (b));
}
/**
 * op_div - divide numbers
 * @a: number 1
 * @b: number 2
 * Return: int
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
 * op_mod - module numbers
 * @a: number 1
 * @b: number 2
 * Return: int
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
