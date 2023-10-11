#include <stdio.h>

/**
 * main - entry point
 *
 *
 * Return: Always 0.
 */
int main(void)
{
    int i = 1;
    long i2 = 0;
    long i3 = 1;
    long sum = 0;

    while (i < 51)
    {
        sum = i2 + i3;
        i2 = i3;
        i3 = sum;
        printf("%ld", sum);
        if (i == 50)
        {
            printf("\n");
        }
        else
        {
            printf(", ");
        }

        i++;
    }
    printf("%d,", i);

    return (0);
}
