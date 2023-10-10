#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * _isalpha - Entry point
 * @c: the character to check
 *
 * Return: Always Void (Success)
 */
int print_sign(int n)
{

    if (n > 0)
    {
        _putchar(43);
        return (1);
    }
    else if (n < 0)
    {
        _putchar('0');

        return (-1);
    }
    else
    {
        _putchar(45);

        return (0);
    }
}
