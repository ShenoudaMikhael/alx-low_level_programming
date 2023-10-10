#include "main.h"
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * times_table - Entry point
 *
 * Return: Always void (Success)
 */
void times_table(void)
{
    int h1, h2;
    int f;
    int l;

    h1 = 0;
    while (h1 < 10)
    {

        h2 = 0;
        while (h2 < 10)
        {

            l = ((h1)*h2) % 10;
            f = ((h1)*h2) / 10;
            if (f != 0)
            {
                _putchar(f + '0');
            }
            else if (h2 != 0)
            {
                _putchar(' ');
            }
            _putchar(l + '0');
            if (h2 < 9)
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
