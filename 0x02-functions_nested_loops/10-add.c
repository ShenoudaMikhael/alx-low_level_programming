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
int f, l;

sum = a + b;

f = sum / 10;
l = sum % 10;

_putchar(f+'0');
_putchar(l+'0');
_putchar('\n');

return (0);
}
