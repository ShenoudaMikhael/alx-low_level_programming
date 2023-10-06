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
i = 48;

while (i < 58)
{
/* code */
putchar((char)i);
if (i != 57)
{
putchar((char)44);
putchar((char)32);
}

i++;
}

putchar('\n');
return (0);
}
