#include "main.h"
/**
 * print_triangle - print triangle
 * @size: int tree size
 * Return: none
 */
void print_triangle(int size)
{
int i, i2, i3;

if (size <= 0)
{
_putchar('\n');
return;
}

for (i = 0; i < size; i++)
{
for (i2 = i + 1; i2 < size; i2++)
{
_putchar(' ');
}
for (i3 = 0; i3 <= i; i3++)
{
_putchar('#');
}

_putchar('\n');
}
}
