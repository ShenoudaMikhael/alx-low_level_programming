#include <stdio.h>
/**
 * main - find greatest prime factor
 * Return: 0
 */
int main(void)
{
long int v;
long int i, f;

i = 1;
f = 100;
v = 612852475143;

while (i < f)
{
if (v % i == 0)
{
f = v / i;

}

i++;
}
printf("%ld\n", f);
return 0;
}
