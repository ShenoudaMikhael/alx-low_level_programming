#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_last_digit - Entry point
 * @n: the character to check
 *
 * Return: Always int (Success)
 */
int print_last_digit(int n)
{
int ld;

if (n < 0)
{
ld = -1 * (n % 10);
_putchar(ld + '0');
return (ld);
}
ld = n % 10;
_putchar(ld + '0');
return (ld);
}
