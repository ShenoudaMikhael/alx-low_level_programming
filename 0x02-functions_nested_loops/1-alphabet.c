#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */
int print_alphabet(void)
{
    int i;

    i = 97;

    while (i < 123)
    {
        /* code */
        _putchar(i);

        i++;
    }
    _putchar('\n');
    return (0);
}
