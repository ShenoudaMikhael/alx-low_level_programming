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
    int i, i2, i3, i4;
    i = 48;
    i2 = 48;
    i3 = 48;
    i4 = 48;
    while (i < 58)
    {
        i2 = 48;
        while (i2 < 58)
        {
            i3 = 48;
            while (i3 < 58)
            {

                i4 = 48;
                while (i4 < 58)
                {
                    putchar((char)i);
                    putchar((char)i2);
                    putchar((char)32);
                    putchar((char)i3);
                    putchar((char)i4);
                    i4++;

                    if (i == 57 && i2 == 56 && i3 == 57 && i4 == 58)
                    {
                        continue;
                    }
                    putchar((char)44);
                    putchar((char)32);
                }
                i3++;
            }
            i2++;
        }
        i++;
    }

    putchar('\n');
    return (0);
}
