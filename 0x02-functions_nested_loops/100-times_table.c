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
int c;
int r;
if (n < 0 || n > 15)
{
return;
}

c = 0;

while (c <= n)
{
r = 0;

while (r <= n)
{
int result = c * r;

if (r != 0)
{
_putchar(',');
_putchar(' ');
}

if (result < 10)
{
_putchar(' ');
_putchar(' ');
_putchar(result + '0');
}
else if (result < 100)
{
_putchar(' ');
_putchar((result / 10) + '0');
_putchar((result % 10) + '0');
}
else
{
_putchar((result / 100) + '0');
_putchar(((result / 10) % 10) + '0');
_putchar((result % 10) + '0');
}

r++;
}

_putchar('\n');
c++;
}
return;
}
