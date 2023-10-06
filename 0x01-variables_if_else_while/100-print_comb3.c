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
i = 48;
i2 = 0;

while (i < 58)
{

i2 = i + 1;
/* code */
while (i2 < 58)
{

/* code */
putchar((char)i);
putchar((char)i2);
if (i != 56)
{
putchar((char)44);
putchar((char)32);
}

i2++;
}

i++;
}
putchar('\n');
return (0);
}
