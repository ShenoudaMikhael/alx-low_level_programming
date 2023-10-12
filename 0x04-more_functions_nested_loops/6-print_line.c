#include "main.h"
/**
 * print_line - takes n and print line
 * @n: int of how loong the line
 *
 * Return: always 0 (success)
 */
void print_line(int n)
{
int i;

for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
