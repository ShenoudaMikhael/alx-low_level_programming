#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an
 * array of integers
 * @a: array to print
 * @n: number of elemnets
 * Return: void
 */
void print_array(int *a, int n)
{
int i;
i = 0;
while (i < n)
{
printf("%d", a[i]);
i++;
if (i == n)
{
printf("\n");
break;
}
printf(", ");
}
}
