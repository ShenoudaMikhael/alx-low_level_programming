#include "main.h"
/**
 * puts_half - prints second half
 * of a string
 * @str: string to print
 * Return: void
 */
void puts_half(char *str)
{
int i, h;
h = 0;
i = 0;
while (str[i] != '\0')
{
i++;
}
i--;
h = (i / 2);

h++;

while (h <= i)
{
_putchar(str[h]);
h++;
}
_putchar('\n');
}
