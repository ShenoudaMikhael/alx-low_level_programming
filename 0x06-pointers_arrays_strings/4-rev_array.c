#include "main.h"
/**
 * reverse_array - reverse array
 * @a: array
 * @n: length of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
int i, o, temp;
i = 0;
o = 0;

while (i <= (n - 1 + o) / 2)
{
temp = a[i];
a[i] = a[(n - 1) - i];
a[(n - 1) - i] = temp;
i++;
}
return;
}
