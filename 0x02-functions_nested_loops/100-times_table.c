#include "main.h"
#include <stdio.h>
/**
 * les_than_h - Entry point
 * @result: result
 * Return: Always void (Success)
 */
void les_than_h(int result)
{
_putchar(' ');
_putchar((result / 10) + '0');
_putchar((result % 10) + '0');
return;
}
/**
 * more_than_h - Entry point
 * @result: result
 * Return: Always void (Success)
 */
void more_than_h(int result)
{
_putchar((result / 100) + '0');
_putchar(((result / 10) % 10) + '0');
_putchar((result % 10) + '0');

return;
}

/**
 * print_times_table - Entry point
 * @n: number to time
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
result = c *r;
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
les_than_h(result);
}
else
{
more_than_h(result);
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
