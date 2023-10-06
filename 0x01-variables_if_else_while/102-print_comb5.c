#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

for (int i = 48; i < 58; i++)
{

for (int i2 = 48; i2 < 58; i2++)
{
for (int i3 = 48; i3 < 58; i3++)
{
/*the 4th digit =start with the 2nd digit +1*/
for (int i4 = i2 + 1; i4 < 58; i4++)
{
putchar((char)i);
putchar((char)i2);
putchar((char)32);
putchar((char)i3);
putchar((char)i4);
if (i == 57 && i2 == 56 && i3 == 57 && i4 == 57)
{
continue;
}

putchar((char)44);
putchar((char)32);
}
}
}
}

putchar('\n');
return (0);
}
