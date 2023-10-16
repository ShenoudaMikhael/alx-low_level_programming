#include "main.h"
/**
 * puts2 - prints every other
 * character
 * @str: cahracters to print
 * Return: none
 */
void puts2(char *str)
{
int i;
int l;

l = sizeof(str);
for (i = 0; i <= l; i++)
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
}
_putchar('\n');
return;
}