#include "main.h"
/**
 * print_number - print int
 * @n: int to print
 *
 * Return: none.
 */
void print_number(int n)
{

int d, rtl, zero, negative;

zero = 0;
rtl = 0;
negative = 0;
if (n < 0)
{
negative = 1;
n *= -1;
}
else if (n == 0)
{
_putchar('0');
return;
}

if (negative == 1)
{
_putchar('-');
}
while (n > 0)
{
d = n % 10;
if (d == 0 && rtl == 0)
{
zero++;
}
rtl = rtl * 10 + d;
n = n / 10;
}
while (rtl > 0)
{
d = rtl % 10;
_putchar('0' + d);
rtl /= 10;
}
while (zero > 0)
{
_putchar('0');
zero--;

}
}
