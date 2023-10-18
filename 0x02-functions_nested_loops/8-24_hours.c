#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * jack_bauer - Entry point
 *
 * Return: Always int (Success)
 */
void jack_bauer(void)
{
int h1, h2;

h1 = 0;
h2 = 0;

while (h1 < 24)
{
h2 = 0;
while (h2 < 60)
{

_putchar(h1 / 10 + '0');
_putchar(h1 % 10 + '0');
_putchar(':');
_putchar(h2 / 10 + '0');
_putchar(h2 % 10 + '0');
_putchar('\n');
h2++;
}

h1++;
}


return;
}
