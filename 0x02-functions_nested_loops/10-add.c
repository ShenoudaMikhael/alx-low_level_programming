#include "main.h"
/**
 * add - check the code
 * @a: first number
 * @b: second number
 * Return: Always 0.
 */
int add(int a, int b)
{
int sum;
int f, m, l;

sum = a + b;

f = sum / 100;
m = (sum / 10) % 10;
l = sum % 10;

if (f != 0)
{
_putchar(f + '0');
}
if (f != 0 && m != 0)
{
_putchar(m + '0');
}

_putchar(l + '0');
_putchar('\n');

return (0);
}
