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
i = 122;

while (i > 96)
{
/* code */
putchar((char) i);
i--;
}
putchar('\n');
return (0);
}
