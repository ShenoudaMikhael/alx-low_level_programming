#include <stdio.h>
/**
 * print_diagsums - the sum of the two diagonals
 * of a square matrix of integers
 * @a: array point
 * @size: siae of array
 * Return: NULL
 */
void print_diagsums(int *a, int size)
{
int i;
int d1;
int d2;
i = 0;
d1 = 0;
d2 = 0;
while (i < (size))
{
/* 0*3+0, 1*3+1, 2*3+2 */
d1 += a[(i *size) + i];
/* 0+1*3-1 (2), 1+1*3-1 (4), 2+1*3-1 (6) */
d2 += a[(i + 1) * (size - 1)];
i++;
}
printf("%d, %d\n", d1, d2);
}
