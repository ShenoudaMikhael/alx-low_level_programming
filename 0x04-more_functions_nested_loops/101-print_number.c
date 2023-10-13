#include "main.h"
#include <stdio.h>
/**
 * print_number - print int
 * @n: int to print
 *
 * Return: Always 0.
 */
void print_number(int n)
{
int i, d, q;
q = 10;
i = 100000;
while (i > 0)
{

if ((n / i <= 9) && (n / i > 0))
{
d = n / i;
_putchar(d + '0');

while (q < i)
{
printf("%d\n", (n % q));
q *= 10;
}
}

i /= 10;
}
_putchar('\n');
}