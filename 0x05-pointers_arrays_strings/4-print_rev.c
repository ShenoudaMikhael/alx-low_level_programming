#include "main.h"
/**
 * print_rev - print string
 * in reverse ordre
 * @s: string to print
 * Return: none
 */
void print_rev(char *s)
{
int i;

i = 0;
while (s[i] != '\0')
{

i++;
}
i--;
while (i != -1)
{
_putchar(s[i]);
i--;
}
_putchar('\n');
}
