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
int c, r, result;
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
result = c * r;
if (result < 10)
{
if (r != 0)
{
_putchar(' ');
_putchar(' ');
}
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
if (r < n)
{
_putchar(',');
_putchar(' ');
}
r++;
}
_putchar('\n');
c++;
}
return;
}
