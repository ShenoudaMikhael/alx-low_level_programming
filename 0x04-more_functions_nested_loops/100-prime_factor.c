#include <stdio.h>
/**
 * main - find greatest prime factor
 * Return: 0
 */
int main(void)
{
long int v;
long int i, max;

max = -1;
v = 612852475143;
i = 2;

while (v != 0)
{
if (v % i != 0)
{
i++;
}
else
{
max = v;

v /= i;
if (v == 1)
{
printf("%ld\n", max);
break;
}
}
}

return 0;
}
