#include "main.h"
/**
 * print_number - print int
 * @n: int to print
 *
 * Return: none.
 */
void print_number(int n)
{

    int d, rtl, n, zero;

    n = 2102;
    zero = 0;
    rtl = 0;
    while (n > 0)
    {
        d = n % 10;
        if (d == 0 && rtl == 0)
        {
            zero++;
        }
        rtl = rtl * 10 + d;
        n = n / 10;
        printf("d:%d - rtl:%d - n:%d \n", d, rtl, n);
    }
    while (rtl > 0)
    {
        d = rtl % 10;
        putchar('0' + d);
        rtl /= 10;
    }
    while (zero > 0)
    {
        putchar('0');
        zero--;
        /* code */
    }

    printf("\n");
}
