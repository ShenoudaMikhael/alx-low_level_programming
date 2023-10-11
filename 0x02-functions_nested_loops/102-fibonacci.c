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
    int i2 = 1;
    int i3 = 2;
    int sum = 0;

    while (i < 51)
    {
        sum = i2 + i3;
        i2 = i3;
        i3 = sum;
        printf("%d", sum);
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
