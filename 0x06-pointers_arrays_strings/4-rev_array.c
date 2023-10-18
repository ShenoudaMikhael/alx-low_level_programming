#include "main.h"
/**
 * reverse_array - reverse array
 * @a: array
 * @n: length of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
int i, temp;
i = 0;
while (i < n / 2)
{
temp = a[i];
a[i] = a[n - i];
a[n - i] = temp;
}
return;
}
