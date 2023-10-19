#include "main.h"
/**
 * print_number - print int
 * @n: int to print
 *
 * Return: none.
 */
void print_number(int n)
{
    unsigned int d, rtl;

    if (n < 0)
    {
        _putchar('-');
        n = -n;
    }

    if (n == 0)
    {
        _putchar(48);
        return;
    }

    rtl = 0;
    while (n > 0)
    {
        d = n % 10;

        rtl = rtl * 10 + d;

        n /= 10;
    }

    while (rtl > 0)
    {
        d = rtl % 10;
        _putchar('0' + d);
        rtl /= 10;
    }
}
