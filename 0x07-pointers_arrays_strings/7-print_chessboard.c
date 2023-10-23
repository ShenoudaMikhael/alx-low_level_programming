#include "main.h"
/**
 * print_chessboard -  prints the chessboard.
 * @a: 2d array
 * Return: NULL
 */
void print_chessboard(char (*a)[8])
{
int i, i2;

i = 0;
while (i < 8)
{
i2 = 0;
while (i2 < 8)
{
_putchar(a[i][i2]);
i2++;
}
_putchar('\n');
i++;
}
}
