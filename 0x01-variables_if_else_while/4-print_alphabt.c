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
i = 97;

while (i < 123)
{
/* code */
if (i == 101 || i == 113)
{
i++;
continue;
}
putchar((char)i);
i++;
}
putchar('\n');
return (0);
}
