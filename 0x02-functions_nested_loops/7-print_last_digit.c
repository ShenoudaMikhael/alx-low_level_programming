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
    int a;
    if (n < 0)
    {
        n = -n;
    }
    a = n % 10;
    _putchar(a + '0');
    return (a);
}
