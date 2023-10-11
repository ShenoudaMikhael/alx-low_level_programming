#include <stdio.h>

/**
 * main - entry point
 *
 *
 * Return: Always 0.
 */
int main(void)
{
int i, res = 0;

while (res < 1024)
{

if (i % 3 == 0 || i % 5 == 0)

res += i;
i++;
}
printf("%d\n", res);

return (0);
}