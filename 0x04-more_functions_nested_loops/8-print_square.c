#include "main.h"
/**
 * print_square - print sqaure
 * @size: size of the square
 * Return: None
 */
void print_square(int size)
{
int i, i2;

if (size <= 0)
{
_putchar('\n');
return;
}
for (i = 0; i < size; i++)
{
for (i2 = 0; i2 < size; i2++)
{
_putchar('#');
}
_putchar('\n');
}
}
