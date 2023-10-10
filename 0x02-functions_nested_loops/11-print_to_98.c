#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - check the code
 * @n: start number
 *
 * Return: Always void.
 */
void print_to_98(int n)
{

    if (n < 98)
    {

        while (n <= 98)
        {
            printf("%d", n);
            if (n < 98)
            {
                printf(", ");
            }
            n++;
        }
    }
    else
    {
        while (n >= 98)
        {
            printf("%d, ", n);
            if (n < 98)
            {
                printf(", ");
            }
            n--;
        }
    }

    return;
}
