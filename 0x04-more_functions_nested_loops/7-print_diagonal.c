#include "main.h"

/**
 * print_diagonal - print diagonal line,
 * @n: number of space
 * Return: void.
 */
void print_diagonal(int n)
{
int i, i2;

for (i = 0; i < n; i++)
{
for (i2 = 0; i2 < i; i2++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n'); /* code */
}
}
