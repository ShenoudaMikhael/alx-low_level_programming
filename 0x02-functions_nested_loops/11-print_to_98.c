#include "main.h"

/**
 * print_to_98 - check the code
 * @n: start number
 *
 * Return: Always void.
 */
void print_to_98(int n)
{

    int f, l;

    f = n / 10;
    l = n % 10;

    while (f <= 9)
    {
        while (l < 9)
        {
            _putchar(f + '0');
            _putchar(l + '0');
            _putchar(',');
            _putchar(' ');
            l++;
        }
        f++;
    }

    _putchar('\n');

    return;
}
