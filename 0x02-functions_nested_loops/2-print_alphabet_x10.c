#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always Void (Success)
 */
void print_alphabet_x10(void)
{
int i, ix;

ix = 0;

while (ix < 10)
{
/* code */

i = 97;

while (i < 123)
{
/* code */
_putchar(i);

i++;
}
_putchar('\n');
ix++;
}

return;
}
