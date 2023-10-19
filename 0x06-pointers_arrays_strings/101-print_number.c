#include "main.h"
/**
 * print_number - print int
 * @n: int to print
 *
 * Return: none.
 */
void print_number(int n)
{
    int d, rtl, rtl2;

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
    rtl2 = 0;
    while (n > 0)
    {
        d = n % 10;
        if (rtl > 9999)
        {
            rtl2 = rtl2 * 10 + d;
        }
        else
        {

            rtl = rtl * 10 + d;
        }
        n /= 10;
    }
    while (rtl2 > 0)
    {
        d = rtl2 % 10;
        _putchar('0' + d);
        rtl2 /= 10;
    }
    while (rtl > 0)
    {
        d = rtl % 10;
        _putchar('0' + d);
        rtl /= 10;
    }
}
