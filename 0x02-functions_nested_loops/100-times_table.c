#include "main.h"
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * times_table - Entry point
 *
 * Return: Always void (Success)
 */
void print_times_table(int n)
{

    int h1, h2;
    int f;
    int l;
    int ll;

    ll = 0;
    if (n < 0 || n > 15)
    {
        return;
    }

    h1 = 0;
    while (h1 < n + 1)
    {

        h2 = 0;
        while (h2 < n + 1)
        {
            if ((h1*h2) > 99)
            {
                ll = ((h1 * h2) / 10) % 10;
            }else{
                ll =0;
            }
            l = ((h1)*h2) % 10;
            f = ((h1)*h2) / 10;

            if (ll != 0 && (h1*h2 > 99))
            {
                _putchar(ll + '0');
            }
            else if (h2!=0)
            {
                _putchar(' ');
            }

            if (f != 0 || ll > 0)
            {
                _putchar(f + '0');
            }
            else if (h2 != 0)
            {
                _putchar(' ');
            }
            _putchar(l + '0');
            if (h2 < n)
            {
                _putchar(',');
                _putchar(' ');
            }

            h2++;
        }

        h1++;
        _putchar('\n');
    }

    return;
}
