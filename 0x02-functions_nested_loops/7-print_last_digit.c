#include "main.h"
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_last_digit - Entry point
 * @n: the character to check
 *
 * Return: Always Void (Success)
 */
int print_last_digit(int n)
{
if (n < 0)
{
n *= -1;
}

return (n % 10);
}
