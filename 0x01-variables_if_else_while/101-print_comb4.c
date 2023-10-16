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

int i;
int i2;
int i3;
i = 48;
i3 = 0;

while (i < 58)
{

i2 = i + 1;
/* code */
while (i2 < 58)
{

i3 = i2 + 1;
/* code */

while (i3 < 58)
{
putchar((char)i);
putchar((char)i2);

putchar((char)i3);
if (i != 55)
{
putchar((char)44);
putchar((char)32);
}
i3++;
}

i2++;
}

i++;
}
putchar('\n');
return (0);
}
