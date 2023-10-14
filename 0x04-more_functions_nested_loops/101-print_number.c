#include "main.h"

/**
 * settle_zeros - print n zeros
 * @zero: number of zeros to print
 * Return: none
 */
void settle_zeros(int zero)
{
while (zero > 0)
{
_putchar('0');
zero--;
}
}

/**
 * rev_print - reverse and print numbers taking
 * in account the limit of int variable
 * @n: the number to print
 * Return: None
 */
void rev_print(int n)
{
int d, rtl, zero, overflow;

while (n > 0)
{
d = n % 10;
if (d == 0 && rtl == 0)
{
zero++;
}
if (d > 1 && d <= 9 && rtl == 0)
{

overflow = d;
n = n / 10;
rtl = 1;
continue;
}

rtl = rtl * 10 + d;

n = n / 10;
}
while (rtl > 0)
{

d = rtl % 10;
if (overflow > 0 && rtl / 10 == 0)
{
d = overflow;
overflow = 0;
}
_putchar('0' + d);
rtl /= 10;
}
settle_zeros(zero);
}

/**
 * print_number - print int
 * @n: int to print
 *
 * Return: none.
 */
void print_number(int n)
{
int negative;
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
rev_print(n);
}
